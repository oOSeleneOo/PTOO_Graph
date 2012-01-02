#ifndef ADDDOCUMENT_H
#define ADDDOCUMENT_H

#include <QDialog>
#include "Document.h"
#include "Book.h"
#include "CD.h"
#include "Movie.h"

namespace Ui {
class addDocument;
}

class addDocument : public QDialog
{
    Q_OBJECT
    
public:
    addDocument(QVector<Document*>* mmyLib, QWidget *parent = 0);
    ~addDocument();
    void add_book(Book* b);
    void add_cd(CD* c);
    void add_movie(Movie* m);

private slots:
    void on_buttonBox_rejected();

    void on_cb_type_activated(const QString &arg1);

    void on_buttonBox_accepted();

    void on_btn_clear_clicked();

private:
    Ui::addDocument *ui;
    QVector<Document*>* myLib;
};

#endif // ADDDOCUMENT_H
