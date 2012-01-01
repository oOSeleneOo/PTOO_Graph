/********************************************************************************
** Form generated from reading UI file 'addDocument.ui'
**
** Created: Sun 1. Jan 22:06:19 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDOCUMENT_H
#define UI_ADDDOCUMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addDocument
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *cb_type;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_title;
    QLineEdit *le_autor;
    QLineEdit *le_style;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *le_pisteNumber;
    QLineEdit *le_editorYear;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_10;
    QLineEdit *le_editor;
    QTextEdit *le_resume;
    QLabel *label_4;
    QLineEdit *le_actor;

    void setupUi(QDialog *addDocument)
    {
        if (addDocument->objectName().isEmpty())
            addDocument->setObjectName(QString::fromUtf8("addDocument"));
        addDocument->resize(501, 560);
        buttonBox = new QDialogButtonBox(addDocument);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(120, 520, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        cb_type = new QComboBox(addDocument);
        cb_type->setObjectName(QString::fromUtf8("cb_type"));
        cb_type->setGeometry(QRect(170, 30, 81, 22));
        label = new QLabel(addDocument);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 111, 16));
        label_2 = new QLabel(addDocument);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 46, 13));
        label_3 = new QLabel(addDocument);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 120, 46, 13));
        le_title = new QLineEdit(addDocument);
        le_title->setObjectName(QString::fromUtf8("le_title"));
        le_title->setEnabled(false);
        le_title->setGeometry(QRect(170, 80, 113, 20));
        le_autor = new QLineEdit(addDocument);
        le_autor->setObjectName(QString::fromUtf8("le_autor"));
        le_autor->setEnabled(false);
        le_autor->setGeometry(QRect(170, 120, 113, 20));
        le_style = new QLineEdit(addDocument);
        le_style->setObjectName(QString::fromUtf8("le_style"));
        le_style->setEnabled(false);
        le_style->setGeometry(QRect(170, 370, 113, 20));
        label_17 = new QLabel(addDocument);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(30, 380, 46, 13));
        label_18 = new QLabel(addDocument);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(30, 410, 91, 16));
        le_pisteNumber = new QLineEdit(addDocument);
        le_pisteNumber->setObjectName(QString::fromUtf8("le_pisteNumber"));
        le_pisteNumber->setEnabled(false);
        le_pisteNumber->setGeometry(QRect(170, 410, 113, 20));
        le_editorYear = new QLineEdit(addDocument);
        le_editorYear->setObjectName(QString::fromUtf8("le_editorYear"));
        le_editorYear->setEnabled(false);
        le_editorYear->setGeometry(QRect(170, 160, 113, 20));
        label_9 = new QLabel(addDocument);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 160, 61, 16));
        label_11 = new QLabel(addDocument);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 240, 46, 13));
        label_10 = new QLabel(addDocument);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 200, 46, 13));
        le_editor = new QLineEdit(addDocument);
        le_editor->setObjectName(QString::fromUtf8("le_editor"));
        le_editor->setEnabled(false);
        le_editor->setGeometry(QRect(170, 200, 113, 20));
        le_resume = new QTextEdit(addDocument);
        le_resume->setObjectName(QString::fromUtf8("le_resume"));
        le_resume->setEnabled(false);
        le_resume->setGeometry(QRect(170, 240, 271, 101));
        label_4 = new QLabel(addDocument);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 450, 46, 13));
        le_actor = new QLineEdit(addDocument);
        le_actor->setObjectName(QString::fromUtf8("le_actor"));
        le_actor->setEnabled(false);
        le_actor->setGeometry(QRect(170, 450, 113, 20));

        retranslateUi(addDocument);
        QObject::connect(buttonBox, SIGNAL(accepted()), addDocument, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addDocument, SLOT(reject()));

        QMetaObject::connectSlotsByName(addDocument);
    } // setupUi

    void retranslateUi(QDialog *addDocument)
    {
        addDocument->setWindowTitle(QApplication::translate("addDocument", "Dialog", 0, QApplication::UnicodeUTF8));
        cb_type->clear();
        cb_type->insertItems(0, QStringList()
         << QApplication::translate("addDocument", "Book", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addDocument", "CD", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("addDocument", "Movie", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("addDocument", "Type of Document :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("addDocument", "Title :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("addDocument", "Autor :", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("addDocument", "Style :", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("addDocument", "Number of piste :", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("addDocument", "Editor Year :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("addDocument", "Resume :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("addDocument", "Editor :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("addDocument", "Actors :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addDocument: public Ui_addDocument {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDOCUMENT_H
