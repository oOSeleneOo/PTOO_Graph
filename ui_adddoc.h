/********************************************************************************
** Form generated from reading UI file 'adddoc.ui'
**
** Created: Sun 1. Jan 15:07:27 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDOC_H
#define UI_ADDDOC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_addDoc
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addDoc)
    {
        if (addDoc->objectName().isEmpty())
            addDoc->setObjectName(QString::fromUtf8("addDoc"));
        addDoc->resize(590, 440);
        buttonBox = new QDialogButtonBox(addDoc);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(200, 370, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(addDoc);
        QObject::connect(buttonBox, SIGNAL(accepted()), addDoc, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addDoc, SLOT(reject()));

        QMetaObject::connectSlotsByName(addDoc);
    } // setupUi

    void retranslateUi(QDialog *addDoc)
    {
        addDoc->setWindowTitle(QApplication::translate("addDoc", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class addDoc: public Ui_addDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDOC_H
