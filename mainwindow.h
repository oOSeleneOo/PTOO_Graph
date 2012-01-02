#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "Document.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initMainWindow();
    void initData();
    void showList();
    std::vector<std::string> split(std::string chaineInit, std::string chaineSep);
    void exportHTML();
    Document* search(QString title);
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
