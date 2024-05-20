/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *bfsWindow;
    QPushButton *dfsWindow;
    QPushButton *updateTrans;
    QPushButton *addEdge;
    QPushButton *deleteEdge;
    QPushButton *checkComplete;
    QPushButton *routes;
    QPushButton *exitMain;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName("mainWindow");
        mainWindow->resize(550, 300);
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName("centralwidget");
        bfsWindow = new QPushButton(centralwidget);
        bfsWindow->setObjectName("bfsWindow");
        bfsWindow->setGeometry(QRect(160, 50, 211, 21));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        bfsWindow->setFont(font);
        dfsWindow = new QPushButton(centralwidget);
        dfsWindow->setObjectName("dfsWindow");
        dfsWindow->setGeometry(QRect(160, 80, 211, 21));
        dfsWindow->setFont(font);
        updateTrans = new QPushButton(centralwidget);
        updateTrans->setObjectName("updateTrans");
        updateTrans->setGeometry(QRect(160, 110, 211, 21));
        updateTrans->setFont(font);
        addEdge = new QPushButton(centralwidget);
        addEdge->setObjectName("addEdge");
        addEdge->setGeometry(QRect(160, 140, 211, 21));
        addEdge->setFont(font);
        deleteEdge = new QPushButton(centralwidget);
        deleteEdge->setObjectName("deleteEdge");
        deleteEdge->setGeometry(QRect(160, 170, 211, 21));
        deleteEdge->setFont(font);
        checkComplete = new QPushButton(centralwidget);
        checkComplete->setObjectName("checkComplete");
        checkComplete->setGeometry(QRect(160, 200, 211, 21));
        checkComplete->setFont(font);
        routes = new QPushButton(centralwidget);
        routes->setObjectName("routes");
        routes->setGeometry(QRect(160, 230, 211, 21));
        routes->setFont(font);
        exitMain = new QPushButton(centralwidget);
        exitMain->setObjectName("exitMain");
        exitMain->setGeometry(QRect(450, 230, 91, 21));
        exitMain->setFont(font);
        mainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName("statusbar");
        mainWindow->setStatusBar(statusbar);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "MainWindow", nullptr));
        bfsWindow->setText(QCoreApplication::translate("mainWindow", "Traverse the graph using BFS", nullptr));
        dfsWindow->setText(QCoreApplication::translate("mainWindow", "Traverse the graph using DFS", nullptr));
        updateTrans->setText(QCoreApplication::translate("mainWindow", "Update transportation", nullptr));
        addEdge->setText(QCoreApplication::translate("mainWindow", " Add Edge", nullptr));
        deleteEdge->setText(QCoreApplication::translate("mainWindow", "Delete Edge", nullptr));
        checkComplete->setText(QCoreApplication::translate("mainWindow", "Check if the graph is complete", nullptr));
        routes->setText(QCoreApplication::translate("mainWindow", "Find routes within a budget", nullptr));
        exitMain->setText(QCoreApplication::translate("mainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
