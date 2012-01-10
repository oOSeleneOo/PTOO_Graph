#ifndef ADDDOCUMENT_H
#define ADDDOCUMENT_H
#include <QDialog>
#include "Document.h"
#include "Book.h"
#include "CD.h"
#include "Movie.h"

/**
 * \file    addDocument.h
 * \author  Dutin Laure & Couradet Vanessa
 * \brief   Definition of addDocument class
 */

namespace Ui {
class addDocument;
}

class addDocument : public QDialog
{
    Q_OBJECT
    
public:

    /**
    * \brief Construtor of the class
    * \param mmyLib a copy to the library from mainwindow
    * \param parent the mainwindow parent
    */
    addDocument(QVector<Document*>* mmyLib, QWidget *parent = 0);

    /**
    * \brief Destructor
    */
    ~addDocument();

    /**
    * \brief Add a book
    * \param b the new book
    */
    void add_book(Book* b);

    /**
    * \brief Add a CD
    * \param c the new CD
    */
    void add_cd(CD* c);

    /**
    * \brief Add a movie
    * \param m the new movie
    */
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
