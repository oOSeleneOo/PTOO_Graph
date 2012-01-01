#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Book.h"
#include "CD.h"
#include "Movie.h"
#include "addDocument.h"
#include <iostream>
#include <fstream>
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initMainWindow();
    initData();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMainWindow()
{
    ui->tw_tab->verticalHeader()->hide();
    ui->tw_tab->setColumnWidth(0,250);
    ui->tw_tab->setColumnWidth(1,175);
    ui->tw_tab->setColumnWidth(2,170);
}

void MainWindow::initData()
{
    std::ifstream monFichier;   //Déclaration d'un flux permettant d'écrire un fichier.
    std::string extension = "./sauve.txt";
    std::vector<std::string> myLine;
    std::string title, autor, editor, style, resume, actor;
    int piste, editorYear;

    monFichier.open(extension.c_str());

    if(monFichier)    //On teste si on peu ouvrir le fichier
    {
        while(monFichier)    //Tant qu'on n'est pas a la fin
        {
            std::string ligne;
            getline(monFichier, ligne); //On lit une ligne
            myLine = split(ligne, "//");
            if (myLine[0] == "<Book>")
            {
                title = myLine[1];
                autor = myLine[2];
                resume = myLine[3];
                editor = myLine[4];
                editorYear = atoi(myLine[5].c_str());
                Book* book = new Book(title, autor, resume, editorYear, editor);
                lib.push_back(book);
                myLine.clear();
            }
            else if (myLine[0] == "<CD>")
            {
                title = myLine[1];
                autor = myLine[2];
                style = myLine[3];
                piste = atoi(myLine[4].c_str());
                CD* cd = new CD(title, autor, style, piste);
                lib.push_back(cd);
                myLine.clear();
            }
            else if (myLine[0] == "<Movie>")
            {
                title = myLine[1];
                autor = myLine[2];
                resume = myLine[3];
                style = myLine[4];
                actor = myLine[5];
                Movie* movie = new Movie(title, autor, resume, style, actor);
                lib.push_back(movie);
                myLine.clear();
            }
        }
    }
    else
    {
        std::cout<<"ERREUR: Impossible d'ouvrir le fichier "<<extension<<std::endl;
    }
    monFichier.close(); //On finit par refermer le fichier

    showList();
}

void MainWindow::showList()
{
    unsigned int i;

    ui->tw_tab->setRowCount(0);

    for(i=0;i<lib.size();i++)
    {
        ui->tw_tab->setRowCount(ui->tw_tab->rowCount()+1);
        ui->tw_tab->setItem(ui->tw_tab->rowCount()-1, 0 , new QTableWidgetItem(QString::fromStdString(lib.at(i)->getTitle())));
        ui->tw_tab->setItem(ui->tw_tab->rowCount()-1, 1 , new QTableWidgetItem(QString::fromStdString(lib.at(i)->getAutor())));
        Book* b = dynamic_cast<Book*>(lib.at(i));
        CD* c = dynamic_cast<CD*>(lib.at(i));
        QString var;

        if(b)
        {
            var = "Book";
        }
        else if(c)
        {
            var = "CD";
        }
        else
        {
            var = "Movie";
        }
        ui->tw_tab->setItem(ui->tw_tab->rowCount()-1, 2 , new QTableWidgetItem(var));
    }
}

std::vector<std::string> MainWindow::split(std::string chaineInit, std::string chaineSep)
{
    std::vector<std::string> chaineSplit;
    size_t pos;

    //on split tant que l'on est pas arrivé au bout de la chaine
    do{
        //position du séparateur dans la chaine initiale
        pos = chaineInit.find(chaineSep);
        //si ce n'est pas la chaine complete
        if (pos!=std::string::npos){
            //on ajoute tout les caractères du début jusqu'a la position du séparateur
            chaineSplit.push_back(chaineInit.substr(0,pos));
            //on réduit la chaine initiale de l'élément ajouté au vecteur ainsi que de la taille du séparateur
            chaineInit = chaineInit.substr(pos+chaineSep.length());
        }else{
            //on ajoute simplement ce qu'il reste de la chaine initiale (dernier élément)
            chaineSplit.push_back(chaineInit);
        }
    }while(pos!=std::string::npos);

    return (chaineSplit);
}

void MainWindow::on_actionQuitter_triggered()
{
    this->close();
}

void MainWindow::on_btn_addDoc_clicked()
{
    addDocument doc(&lib,this);
    doc.exec();
    if(doc.close())
    {
        showList();
    }
}

void MainWindow::on_actionAjouter_triggered()
{
    addDocument doc(&lib, this);
    doc.exec();

    if(doc.close())
    {
        showList();
    }
}

void MainWindow::on_btn_dellDoc_clicked()
{
    while(ui->tw_tab->selectedItems().count() > 0)
    {
        QString title;

        int col = 0;
        int lig = ui->tw_tab->currentIndex().row();
        title = ui->tw_tab->item(lig,col)->data(0).toString();
        lib.remove(ui->tw_tab->selectedItems().at(0)->row());
        dell(title.toStdString());
        ui->tw_tab->removeRow(ui->tw_tab->selectedItems().at(0)->row());
    }

    ui->btn_dellDoc->setEnabled(false);
}

void MainWindow::on_tw_tab_cellClicked(int row, int column)
{
    ui->btn_dellDoc->setEnabled(true);
}

void MainWindow::dell(std::string title)
{
    std::ifstream monFichier;
    std::ofstream newFichier;
    std::string extension = "./sauve.txt";
    std::string newName = "./sauve2.txt";
    std::vector<std::string> myLine;
    std::string ligne;

    monFichier.open(extension.c_str());

    if(monFichier)
    {
        newFichier.open(newName.c_str());
        if(newFichier)
        {
            while(getline(monFichier,ligne))
            {
                myLine = split(ligne, "//");
                if (myLine[1] == title)
                {
                    //c'est le document a supprimer
                }
                else
                {
                    //c'est un document a garder
                    newFichier<<ligne<<std::endl;
                }
            }
        }
        else
        {
             std::cout<<"ERREUR: Impossible d'ouvrir le fichier "<<newName<<std::endl;
        }
        newFichier.close();
        monFichier.close();
        //supression de l'ancien fichier
        remove(extension.c_str());
        //on renomme le nouveau fichier
        rename(newName.c_str(), extension.c_str());
    }
    else
    {
        std::cout<<"ERREUR: Impossible d'ouvrir le fichier "<<extension<<std::endl;
    }
}

void MainWindow::on_actionSupprimer_triggered()
{
    on_btn_dellDoc_clicked();
}

void MainWindow::on_actionExporter_en_HTML_triggered()
{
    exportHTML();
    QMessageBox::information(this, tr("Export HTML"), tr("Export ending. File index.html creating."), QMessageBox::Ok);
}

void MainWindow::exportHTML()
{
    std::ofstream f("index.html");
    if(f)
    {
        f<<"<!DOCTYPE html>"<<std::endl;
        f<<"<html>"<<std::endl;
        f<<"<head>"<<"<h1>Liste des Documents</h1>"<<"</head>"<<std::endl;
        f<<"<body>"<<std::endl;
        f<<"<table border=\"1\";>"<<std::endl;
        f<<"<tr><th><big>Title</big></th><th><big>Autor</big></th></th><th><big>Type</big></th></tr>"<<std::endl;
        for(unsigned int i = 0;i<lib.size();i++)
        {
            Book* b = dynamic_cast<Book*>(lib[i]);
            CD* c = dynamic_cast<CD*>(lib[i]);

            f<<"<tr><th>"<<lib[i]->getTitle()<<"</th><th>"<<lib[i]->getAutor()<<"</th>";

            if(b)
            {
                f<<"<th>Book</th></tr>" << std::endl;
            }
            else if (c)
            {
                f<<"<th>CD</th></tr>" << std::endl;
            }
            else
            {
                f<<"<th>Movie</th></tr>" << std::endl;
            }
        }

        f<<"</table>"<<std::endl;
        f<<"</body>"<<std::endl;
        f<<"</html>"<<std::endl;
        f.close();
    }
}
