#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QVector>
#include "Document.h"

/**
 * \file    mainwindow.h
 * \author  Dutin Laure & Couradet Vanessa
 * \brief   Definition of mainwindow class
 */

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:

    /**
    * \brief Constructor of the class
    * \param parent the mainwindow parent
    */
    explicit MainWindow(QWidget *parent = 0);

    /**
    * \brief Destructor
    */
    ~MainWindow();

    /**
    * \brief Initialize the class
    */
    void initMainWindow();

    /**
    * \brief Initialize the object
    */
    void initData();

    /**
    * \brief Show the library
    */
    void showList();

    /**
    * \brief Split a string
    * \param chaineInit the string
    * \param chaineSep the separator
    * \return the split of the string
    */
    std::vector<std::string> split(std::string chaineInit, std::string chaineSep);

    /**
    * \brief Export the library to html
    */
    void exportHTML();

    /**
    * \brief Search a document
    * \param title the title
    * \return the document
    */
    Document* search(QString title);

    /**
    * \brief Copy the library
    */
    void copyLibrary();

private slots:
    void on_actionQuitter_triggered();

    void on_btn_addDoc_clicked();

    void on_actionAjouter_triggered();

    void on_btn_dellDoc_clicked();

    void on_tw_tab_cellClicked(int row, int column);

    void dell(std::string title);

    void on_actionSupprimer_triggered();

    void on_actionExporter_en_HTML_triggered();

    void on_actionTrie_alphabetique_triggered();

    void on_actionTrie_par_type_triggered();

    void on_actionTrie_par_auteur_triggered();

    void on_btn_modify_clicked();

private:
    Ui::MainWindow *ui;
    QVector<Document*> lib;
};

#endif // MAINWINDOW_H
