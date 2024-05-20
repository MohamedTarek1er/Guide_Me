QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    RoutesOptionsGui.cpp \
    a_BFSClass.cpp \
    a_DFSClass.cpp \
    a_Edge.cpp \
    a_Graph.cpp \
    a_RoutesOptions.cpp \
    a_Updater.cpp \
    addedge.cpp \
    addtransportation.cpp \
    bfsdesign.cpp \
    changecost.cpp \
    deleteedge.cpp \
    deletetransportation.cpp \
    dfsdesign.cpp \
    main.cpp \
    mainwindow.cpp \
    renametransportation.cpp \
    updatewindow.cpp

HEADERS += \
    RoutesOptionsGui.h \
    a_BFSClass.h \
    a_DFSClass.h \
    a_Edge.h \
    a_Graph.h \
    a_RoutesOptions.h \
    a_Updater.h \
    addedge.h \
    addtransportation.h \
    bfsdesign.h \
    changecost.h \
    deleteedge.h \
    deletetransportation.h \
    dfsdesign.h \
    mainwindow.h \
    renametransportation.h \
    updatewindow.h

FORMS += \
    RoutesOptionsGui.ui \
    addedge.ui \
    addtransportation.ui \
    bfsdesign.ui \
    changecost.ui \
    deleteedge.ui \
    deletetransportation.ui \
    dfsdesign.ui \
    mainwindow.ui \
    renametransportation.ui \
    updatewindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    ../../../../Downloads/OIG4_5.jpg
