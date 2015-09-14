TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += c++11



SOURCES += main.cpp \
    url.cpp \
    urlhistory.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    url.h \
    urlhistory.h

