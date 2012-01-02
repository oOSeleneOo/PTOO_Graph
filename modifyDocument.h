#ifndef MODIFYDOCUMENT_H
#define MODIFYDOCUMENT_H

#include <QDialog>
#include "Document.h"

namespace Ui {
class modifyDocument;
}

class modifyDocument : public QDialog
{
    Q_OBJECT
    
public:
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
