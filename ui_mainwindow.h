/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue 10. Jan 23:23:06 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAjouter;
    QAction *actionSupprimer;
    QAction *actionQuitter;
    QAction *actionExporter_en_HTML;
    QAction *actionTrie_alphabetique;
    QAction *actionTrie_par_type;
    QAction *actionTrie_par_auteur;
    QWidget *centralWidget;
    QTableWidget *tw_tab;
    QPushButton *btn_addDoc;
    QPushButton *btn_dellDoc;
    QPushButton *btn_modify;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
    QMenu *menuOutils;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(781, 469);
        actionAjouter = new QAction(MainWindow);
        actionAjouter->setObjectName(QString::fromUtf8("actionAjouter"));
        actionSupprimer = new QAction(MainWindow);
        actionSupprimer->setObjectName(QString::fromUtf8("actionSupprimer"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionExporter_en_HTML = new QAction(MainWindow);
        actionExporter_en_HTML->setObjectName(QString::fromUtf8("actionExporter_en_HTML"));
        actionTrie_alphabetique = new QAction(MainWindow);
        actionTrie_alphabetique->setObjectName(QString::fromUtf8("actionTrie_alphabetique"));
        actionTrie_par_type = new QAction(MainWindow);
        actionTrie_par_type->setObjectName(QString::fromUtf8("actionTrie_par_type"));
        actionTrie_par_auteur = new QAction(MainWindow);
        actionTrie_par_auteur->setObjectName(QString::fromUtf8("actionTrie_par_auteur"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tw_tab = new QTableWidget(centralWidget);
        if (tw_tab->columnCount() < 3)
            tw_tab->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tw_tab->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tw_tab->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tw_tab->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tw_tab->setObjectName(QString::fromUtf8("tw_tab"));
        tw_tab->setGeometry(QRect(60, 30, 601, 351));
        btn_addDoc = new QPushButton(centralWidget);
        btn_addDoc->setObjectName(QString::fromUtf8("btn_addDoc"));
        btn_addDoc->setGeometry(QRect(280, 390, 121, 21));
        btn_dellDoc = new QPushButton(centralWidget);
        btn_dellDoc->setObjectName(QString::fromUtf8("btn_dellDoc"));
        btn_dellDoc->setEnabled(false);
        btn_dellDoc->setGeometry(QRect(410, 390, 121, 23));
        btn_modify = new QPushButton(centralWidget);
        btn_modify->setObjectName(QString::fromUtf8("btn_modify"));
        btn_modify->setGeometry(QRect(550, 390, 111, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 781, 21));
        menuFichier = new QMenu(menuBar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuEdition = new QMenu(menuBar);
        menuEdition->setObjectName(QString::fromUtf8("menuEdition"));
        menuOutils = new QMenu(menuBar);
        menuOutils->setObjectName(QString::fromUtf8("menuOutils"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuBar->addAction(menuOutils->menuAction());
        menuFichier->addAction(actionQuitter);
        menuEdition->addSeparator();
        menuEdition->addAction(actionAjouter);
        menuEdition->addAction(actionSupprimer);
        menuEdition->addAction(actionExporter_en_HTML);
        menuOutils->addAction(actionTrie_alphabetique);
        menuOutils->addAction(actionTrie_par_auteur);
        menuOutils->addAction(actionTrie_par_type);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionAjouter->setText(QApplication::translate("MainWindow", "Ajouter document", 0, QApplication::UnicodeUTF8));
        actionSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionExporter_en_HTML->setText(QApplication::translate("MainWindow", "Exporter en HTML", 0, QApplication::UnicodeUTF8));
        actionTrie_alphabetique->setText(QApplication::translate("MainWindow", "Short by name", 0, QApplication::UnicodeUTF8));
        actionTrie_par_type->setText(QApplication::translate("MainWindow", "Short by type", 0, QApplication::UnicodeUTF8));
        actionTrie_par_auteur->setText(QApplication::translate("MainWindow", "Short by autor", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tw_tab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Title", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tw_tab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Autor", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tw_tab->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Type", 0, QApplication::UnicodeUTF8));
        btn_addDoc->setText(QApplication::translate("MainWindow", "Add a document", 0, QApplication::UnicodeUTF8));
        btn_dellDoc->setText(QApplication::translate("MainWindow", "Delete a document", 0, QApplication::UnicodeUTF8));
        btn_modify->setText(QApplication::translate("MainWindow", "Modify a document", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0, QApplication::UnicodeUTF8));
        menuOutils->setTitle(QApplication::translate("MainWindow", "Tools", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
