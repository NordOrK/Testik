#-------------------------------------------------
#
# Project created by QtCreator 2015-02-19T20:06:18
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Maxtest
TEMPLATE = app


SOURCES += main.cpp\
        maxtest.cpp \
    test_results.cpp

HEADERS  += maxtest.h \
    test_results.h

FORMS    += maxtest.ui \
    begin.ui \
    begin-dialog.ui \
    second.ui \
    third-study.ui \
    third-test.ui \
    test-studies-help.ui \
    test-studies-one.ui \
    test-one.ui \
    test-many.ui \
    test-word.ui \
    test-studies-many.ui \
    test-studies-word.ui \
    testendquestion.ui \
    test_results.ui

DISTFILES += \
    muse.zip
