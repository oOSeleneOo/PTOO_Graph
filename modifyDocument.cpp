#include "modifyDocument.h"
#include "ui_modifyDocument.h"
#include "CD.h"
#include "Book.h"
#include "Movie.h"

modifyDocument::modifyDocument(QVector<Document*>* mmyLib, Document* doc, QWidget *parent) :
    QDialog(parent),
    myLib(mmyLib),
    myDoc(doc),
    ui(new Ui::modifyDocument)
{
    ui->setupUi(this);
    ui->le_title->setText(QString::fromStdString(myDoc->getTitle()));
    ui->le_autor->setText(QString::fromStdString(myDoc->getAutor()));

    Book* b = dynamic_cast<Book*>(myDoc);
    CD* c = dynamic_cast<CD*>(myDoc);
    Movie* m = dynamic_cast<Movie*>(myDoc);

    if(b)
    {
        ui->le_editor->setText(QString::fromStdString(b->getEditor()));
        ui->le_editor->setEnabled(true);
        ui->le_editorYear->setText(QString::number(b->getEditorYear()));
        ui->le_editorYear->setEnabled(true);
        ui->le_resume->setText(QString::fromStdString(b->getResume()));
        ui->le_resume->setEnabled(true);
    }
    else if (c)
    {
        ui->le_pisteNumber->setText(QString::number(c->getPisteNumber()));
        ui->le_pisteNumber->setEnabled(true);
        ui->le_style->setText(QString::fromStdString(c->getStyle()));
        ui->le_style->setEnabled(true);
    }
    else
    {
        ui->le_actor->setText(QString::fromStdString(m->getActor()));
        ui->le_actor->setEnabled(true);
        ui->le_resume->setText(QString::fromStdString(m->getResume()));
        ui->le_resume->setEnabled(true);
        ui->le_style->setText(QString::fromStdString(m->getStyle()));
        ui->le_style->setEnabled(true);
    }
}

modifyDocument::~modifyDocument()
{
    delete ui;
}

void modifyDocument::on_buttonBox_accepted()
{
    long i;
    std::string title, autor, resume, actor, style, editor;
    int pisteNumber, editorYear;

    title = ui->le_title->text().toStdString();
    autor = ui->le_autor->text().toStdString();

    for(i=0;i<myLib->size();i++)
    {
        if(myLib->at(i)->getTitle() == myDoc->getTitle())
        {
            Book* b = dynamic_cast<Book*>(myDoc);
            CD* c = dynamic_cast<CD*>(myDoc);

            if(b)
            {

                resume = ui->le_resume->toPlainText().toStdString();
                editor = ui->le_editor->text().toStdString();
                editorYear = ui->le_editorYear->text().toInt();

                Book* book = new Book(title, autor, resume, editorYear, editor);
                myLib->replace(i,book);
            }
            else if (c)
            {
                pisteNumber = ui->le_pisteNumber->text().toInt();
                style = ui->le_style->text().toStdString();

                CD* cd = new CD(title, autor, style, pisteNumber);
                myLib->replace(i,cd);
            }
            else
            {
                actor = ui->le_actor->text().toStdString();
                resume = ui->le_resume->toPlainText().toStdString();
                style = ui->le_style->text().toStdString();

                Movie* movie = new Movie(title, autor, resume, style, actor);
                myLib->replace(i,movie);
            }
        }
    }
}
