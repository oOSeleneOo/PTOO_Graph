/********************************************************************************
** Form generated from reading UI file 'modifyDocument.ui'
**
** Created: Mon 2. Jan 19:08:32 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYDOCUMENT_H
#define UI_MODIFYDOCUMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_modifyDocument
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_11;
    QLabel *label_18;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *le_editorYear;
    QLabel *label_10;
    QLineEdit *le_actor;
    QLineEdit *le_pisteNumber;
    QTextEdit *le_resume;
    QLineEdit *le_editor;
    QLabel *label_3;
    QLabel *label_9;
    QLineEdit *le_style;
    QLineEdit *le_autor;
    QLabel *label_17;
    QLineEdit *le_title;

    void setupUi(QDialog *modifyDocument)
    {
        if (modifyDocument->objectName().isEmpty())
            modifyDocument->setObjectName(QString::fromUtf8("modifyDocument"));
        modifyDocument->resize(519, 515);
        buttonBox = new QDialogButtonBox(modifyDocument);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(110, 470, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_11 = new QLabel(modifyDocument);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(40, 210, 46, 13));
        label_18 = new QLabel(modifyDocument);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(50, 380, 91, 16));
        label_4 = new QLabel(modifyDocument);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 420, 46, 13));
        label_2 = new QLabel(modifyDocument);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 46, 13));
        le_editorYear = new QLineEdit(modifyDocument);
        le_editorYear->setObjectName(QString::fromUtf8("le_editorYear"));
        le_editorYear->setEnabled(false);
        le_editorYear->setGeometry(QRect(190, 130, 113, 20));
        label_10 = new QLabel(modifyDocument);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(40, 170, 46, 13));
        le_actor = new QLineEdit(modifyDocument);
        le_actor->setObjectName(QString::fromUtf8("le_actor"));
        le_actor->setEnabled(false);
        le_actor->setGeometry(QRect(190, 420, 113, 20));
        le_pisteNumber = new QLineEdit(modifyDocument);
        le_pisteNumber->setObjectName(QString::fromUtf8("le_pisteNumber"));
        le_pisteNumber->setEnabled(false);
        le_pisteNumber->setGeometry(QRect(190, 380, 113, 20));
        le_resume = new QTextEdit(modifyDocument);
        le_resume->setObjectName(QString::fromUtf8("le_resume"));
        le_resume->setEnabled(false);
        le_resume->setGeometry(QRect(190, 210, 271, 101));
        le_editor = new QLineEdit(modifyDocument);
        le_editor->setObjectName(QString::fromUtf8("le_editor"));
        le_editor->setEnabled(false);
        le_editor->setGeometry(QRect(190, 170, 113, 20));
        label_3 = new QLabel(modifyDocument);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 90, 46, 13));
        label_9 = new QLabel(modifyDocument);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(40, 130, 61, 16));
        le_style = new QLineEdit(modifyDocument);
        le_style->setObjectName(QString::fromUtf8("le_style"));
        le_style->setEnabled(false);
        le_style->setGeometry(QRect(190, 340, 113, 20));
        le_autor = new QLineEdit(modifyDocument);
        le_autor->setObjectName(QString::fromUtf8("le_autor"));
        le_autor->setEnabled(true);
        le_autor->setGeometry(QRect(190, 90, 113, 20));
        label_17 = new QLabel(modifyDocument);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(50, 350, 46, 13));
        le_title = new QLineEdit(modifyDocument);
        le_title->setObjectName(QString::fromUtf8("le_title"));
        le_title->setEnabled(true);
        le_title->setGeometry(QRect(190, 50, 151, 20));

        retranslateUi(modifyDocument);
        QObject::connect(buttonBox, SIGNAL(accepted()), modifyDocument, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), modifyDocument, SLOT(reject()));

        QMetaObject::connectSlotsByName(modifyDocument);
    } // setupUi

    void retranslateUi(QDialog *modifyDocument)
    {
        modifyDocument->setWindowTitle(QApplication::translate("modifyDocument", "Dialog", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("modifyDocument", "Resume :", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("modifyDocument", "Number of piste :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("modifyDocument", "Actors :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("modifyDocument", "Title :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("modifyDocument", "Editor :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("modifyDocument", "Autor :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("modifyDocument", "Editor Year :", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("modifyDocument", "Style :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class modifyDocument: public Ui_modifyDocument {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYDOCUMENT_H
