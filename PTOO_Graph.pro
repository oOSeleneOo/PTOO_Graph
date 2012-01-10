#-------------------------------------------------
#
# Project created by QtCreator 2012-01-01T13:27:03
#
#-------------------------------------------------

QT       += core gui

TARGET = PTOO_Graph
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Movie.cpp \
    Document.cpp \
    CD.cpp \
    Book.cpp \
    addDocument.cpp \
    modifyDocument.cpp

HEADERS  += mainwindow.h \
    Movie.h \
    Document.h \
    CD.h \
    Book.h \
    addDocument.h \
    modifyDocument.h

FORMS    += mainwindow.ui \
    addDocument.ui \
    modifyDocument.ui
