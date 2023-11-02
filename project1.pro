QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets quickwidgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    helpcenter.cpp \
    home.cpp \
    locator.cpp \
    main.cpp \
    mainwindow.cpp \
    mainwindow1.cpp \
    setting.cpp

HEADERS += \
    helpcenter.h \
    home.h \
    locator.h \
    mainwindow.h \
    mainwindow1.h \
    setting.h

FORMS += \
    helpcenter.ui \
    home.ui \
    locator.ui \
    mainwindow.ui \
    mainwindow1.ui \
    setting.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    qml.qrc \
    resources.qrc
