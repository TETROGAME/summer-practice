QT += testlib
QT += gui
QT += widgets
# CONFIG += qt warn_on depend_includepath testcase
CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app
TEMPLATE = app

SOURCES += tst_myarraytest.cpp \
        ../Task2/myarray.h \
        ../Task2/myarray.cpp

