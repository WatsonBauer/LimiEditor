#-------------------------------------------------
#
# Project created by QtCreator 2013-03-02T12:24:53
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TARGET = LimiEditor
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    searchdialog.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    searchdialog.h \
    about.h

FORMS    += mainwindow.ui \
    searchdialog.ui \
    about.ui

RESOURCES += \
    Icons/Icons.qrc \
    CN_Translator.qrc

OTHER_FILES += \
    CoverIcon.rc

RC_FILE = \
    CoverIcon.rc
