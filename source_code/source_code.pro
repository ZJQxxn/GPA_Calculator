#-------------------------------------------------
#
# Project created by QtCreator 2017-07-08T16:33:52
#
#-------------------------------------------------

QT       += core gui
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = source_code
TEMPLATE = app


SOURCES += main.cpp\
        maindialog.cpp \
    adddialog.cpp

HEADERS  += maindialog.h \
    adddialog.h

FORMS    += maindialog.ui \
    adddialog.ui
