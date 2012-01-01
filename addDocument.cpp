#include "addDocument.h"
#include "ui_addDocument.h"
#include "Book.h"
#include "CD.h"
#include "Movie.h"
#include <iostream>
#include <fstream>
#include <QTextEdit>
#include <QMessageBox>

addDocument::addDocument(QVector<Document*>* mmyLib, QWidget *parent) :
    QDialog(parent),
    myLib(mmyLib),
    ui(new Ui::addDocument)
{
    ui->setupUi(this);
    ui->le_actor->setEnabled(false);
    ui->le_autor->setEnabled(false);
    ui->le_editor->setEnabled(false);
    ui->le_editorYear->setEnabled(false);
    ui->le_pisteNumber->setEnabled(false);
    ui->le_resume->setEnabled(false);
    ui->le_style->setEnabled(false);
    ui->le_title->setEnabled(false);
}

addDocument::~addDocument()
{
    delete ui;
}

void addDocument::on_buttonBox_rejected()
{
    this->close();
}

void addDocument::on_cb_type_activated(const QString &var)
{
    if(var == "Book")
    {
        ui->le_actor->setEnabled(false);
        ui->le_autor->setEnabled(true);
        ui->le_editor->setEnabled(true);
        ui->le_editorYear->setEnabled(true);
        ui->le_pisteNumber->setEnabled(false);
        ui->le_resume->setEnabled(true);
        ui->le_style->setEnabled(false);
        ui->le_title->setEnabled(true);
    }
    else if (var == "CD")
    {
        ui->le_actor->setEnabled(false);
        ui->le_autor->setEnabled(true);
        ui->le_editor->setEnabled(false);
        ui->le_editorYear->setEnabled(false);
        ui->le_pisteNumber->setEnabled(true);
        ui->le_resume->setEnabled(false);
        ui->le_style->setEnabled(true);
        ui->le_title->setEnabled(true);
    }
    else
    {
        ui->le_actor->setEnabled(true);
        ui->le_autor->setEnabled(true);
        ui->le_editor->setEnabled(false);
        ui->le_editorYear->setEnabled(false);
        ui->le_pisteNumber->setEnabled(false);
        ui->le_resume->setEnabled(true);
        ui->le_style->setEnabled(true);
        ui->le_title->setEnabled(true);
    }
}

void addDocument::on_buttonBox_accepted()
{
    std::string title, autor, editor, resume, style, actor;
    int editorYear, pisteNumber;

    if(ui->le_title->text() == "")
    {
       QMessageBox::information(this, tr("Ajout annul�"), tr("You must write an title to addind a document !"), QMessageBox::Ok);
    }
    else
    {
        title = ui->le_title->text().toStdString();
        autor = ui->le_autor->text().toStdString();
        editor = ui->le_editor->text().toStdString();
        resume = ui->le_resume->toPlainText().toStdString();
        style = ui->le_style->text().toStdString();
        actor = ui->le_actor->text().toStdString();
        editorYear = ui->le_editorYear->text().toInt();
        pisteNumber = ui->le_pisteNumber->text().toInt();

        if(ui->cb_type->currentIndex() == 0) //on ajoute un Book
        {
            Book* doc = new Book(title,autor,resume,editorYear, editor);
            add_book(doc);
            myLib->push_back(doc);
            QMessageBox::information(this, tr("Ajout �ffectu�"), tr("Your document is add !"), QMessageBox::Ok);
        }
        else if(ui->cb_type->currentIndex() == 1) //on ajoute un CD
        {
            CD* doc = new CD(title,autor,style,pisteNumber);
            add_cd(doc);
            myLib->push_back(doc);
            QMessageBox::information(this, tr("Ajout �ffectu�"), tr("Your document is add !"), QMessageBox::Ok);
        }
        else if(ui->cb_type->currentIndex() == 2)//on ajoute un Movie
        {
            Movie* doc = new Movie(title,autor,resume,style,autor);
            add_movie(doc);
            myLib->push_back(doc);
            QMessageBox::information(this, tr("Ajout �ffectu�"), tr("Your document is add !"), QMessageBox::Ok);
        }
    }
}

void addDocument::add_book(Book* b)
{
    std::ofstream monFichier("./sauve.txt", std::ios::app);

    if(monFichier)
    {
        monFichier<<"<Book>";
        monFichier<<"//";
        monFichier<<b->getTitle();
        monFichier<<"//";
        monFichier<<b->getAutor();
        monFichier<<"//";
        monFichier<<b->getResume();
        monFichier<<"//";
        monFichier<<b->getEditor();
        monFichier<<"//";
        monFichier<<b->getEditorYear();
        monFichier<<"//"<<std::endl;
    }
    else
    {
        std::cout<<"ERREUR: Impossible d'ouvrir le fichier "<<std::endl;
    }
    monFichier.close();
}

void addDocument::add_cd(CD* c)
{
    std::ofstream monFichier("./sauve.txt", std::ios::app);

    if(monFichier)
    {
        monFichier<<"<CD>";
        monFichier<<"//";
        monFichier<<c->getTitle();
        monFichier<<"//";
        monFichier<<c->getAutor();
        monFichier<<"//";
        monFichier<<c->getStyle();
        monFichier<<"//";
        monFichier<<c->getPisteNumber();
        monFichier<<"//"<<std::endl;
    }
    else
    {
        std::cout<<"ERREUR: Impossible d'ouvrir le fichier "<<std::endl;
    }
    monFichier.close();
}

void addDocument::add_movie(Movie* m)
{
    std::ofstream monFichier("./sauve.txt", std::ios::app);

    if(monFichier)
    {
        monFichier<<"<Movie>";
        monFichier<<"//";
        monFichier<<m->getTitle();
        monFichier<<"//";
        monFichier<<m->getAutor();
        monFichier<<"//";
        monFichier<<m->getResume();
        monFichier<<"//";
        monFichier<<m->getStyle();
        monFichier<<"//";
        monFichier<<m->getActor();
        monFichier<<"//"<<std::endl;
    }
    else
    {
        std::cout<<"ERREUR: Impossible d'ouvrir le fichier "<<std::endl;
    }
    monFichier.close();
}
