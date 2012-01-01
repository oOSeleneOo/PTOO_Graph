/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sun 1. Jan 22:11:16 2012
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
    QWidget *centralWidget;
    QTableWidget *tw_tab;
    QPushButton *btn_addDoc;
    QPushButton *btn_dellDoc;
    QPushButton *btn_modify;
    QMenuBar *menuBar;
    QMenu *menuFichier;
    QMenu *menuEdition;
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
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menuFichier->menuAction());
        menuBar->addAction(menuEdition->menuAction());
        menuFichier->addAction(actionQuitter);
        menuEdition->addSeparator();
        menuEdition->addAction(actionAjouter);
        menuEdition->addAction(actionSupprimer);
        menuEdition->addAction(actionExporter_en_HTML);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionAjouter->setText(QApplication::translate("MainWindow", "Ajouter document", 0, QApplication::UnicodeUTF8));
        actionSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        actionQuitter->setText(QApplication::translate("MainWindow", "Quitter", 0, QApplication::UnicodeUTF8));
        actionExporter_en_HTML->setText(QApplication::translate("MainWindow", "Exporter en HTML", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tw_tab->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Title", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tw_tab->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Autor", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tw_tab->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Type", 0, QApplication::UnicodeUTF8));
        btn_addDoc->setText(QApplication::translate("MainWindow", "Ajouter un document", 0, QApplication::UnicodeUTF8));
        btn_dellDoc->setText(QApplication::translate("MainWindow", "Supprimer le document", 0, QApplication::UnicodeUTF8));
        btn_modify->setText(QApplication::translate("MainWindow", "Modifier le document", 0, QApplication::UnicodeUTF8));
        menuFichier->setTitle(QApplication::translate("MainWindow", "Fichier", 0, QApplication::UnicodeUTF8));
        menuEdition->setTitle(QApplication::translate("MainWindow", "Edition", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
