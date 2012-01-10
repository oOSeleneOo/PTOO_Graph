#ifndef MODIFYDOCUMENT_H
#define MODIFYDOCUMENT_H
#include <QDialog>
#include "Document.h"

/**
 * \file    modifyDocument.h
 * \author  Dutin Laure & Couradet Vanessa
 * \brief   Definition of modifyDocument class
 */

namespace Ui {
class modifyDocument;
}

class modifyDocument : public QDialog
{
    Q_OBJECT
    
public:

    /**
    * \brief Constructor of the class
    * \param mmyLib copy of library from mainwindow
    * \param doc the document who will be modify
    * \param parent the mainwindow parent
    */
    explicit modifyDocument(QVector<Document*>* mmyLib, Document* doc, QWidget *parent = 0);
    ~modifyDocument();
    
private slots:
    void on_buttonBox_accepted();

private:
    Ui::modifyDocument *ui;
    QVector<Document*>* myLib;
    Document* myDoc;
};

#endif // MODIFYDOCUMENT_H
