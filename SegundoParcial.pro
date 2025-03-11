QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    acerca_de.cpp \
    armaduras.cpp \
    main.cpp \
    mainwindow.cpp \
    momento.cpp \
    v2vectores.cpp \
    vigas.cpp

HEADERS += \
    acerca_de.h \
    armaduras.h \
    mainwindow.h \
    momento.h \
    v2vectores.h \
    vigas.h

FORMS += \
    acerca_de.ui \
    armaduras.ui \
    mainwindow.ui \
    momento.ui \
    v2vectores.ui \
    vigas.ui

TRANSLATIONS += \
    SegundoParcial_es_PE.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ejerVector.qrc \
    gcgcgc.qrc \
    imgVector.qrc \
    img_logp.qrc \
    img_salve.qrc \
    problemas.qrc \
    uni.qrc \
    vector.qrc
