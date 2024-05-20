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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *deleteEdgeMenu;
    QPushButton *dfsMenu;
    QLabel *label_2;
    QPushButton *addEdgeMenu;
    QPushButton *exitMenu;
    QPushButton *BfsMenu;
    QPushButton *routesMenu;
    QPushButton *UpdateMenu;
    QPushButton *checkMenu;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("/* Normal state */\n"
"QPushButton {\n"
"  border:none;\n"
"selection-background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"background-color:transparent;\n"
"}\n"
"\n"
"/* Hover state */\n"
"QPushButton:hover {\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"/* Pressed state */\n"
"QPushButton:pressed {\n"
"    background-color: darkblue;\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 531, 380));
        label->setStyleSheet(QString::fromUtf8("/* Hover state */\n"
"QPushButton:hover {\n"
"    background-color: lightblue;\n"
"}\n"
"\n"
"/* Pressed state */\n"
"QPushButton:pressed {\n"
"    background-color: darkblue;\n"
"}\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/OIG4_555.jpg")));
        label->setWordWrap(false);
        deleteEdgeMenu = new QPushButton(centralwidget);
        deleteEdgeMenu->setObjectName("deleteEdgeMenu");
        deleteEdgeMenu->setGeometry(QRect(120, 220, 291, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        deleteEdgeMenu->setFont(font);
        deleteEdgeMenu->setStyleSheet(QString::fromUtf8(""));
        dfsMenu = new QPushButton(centralwidget);
        dfsMenu->setObjectName("dfsMenu");
        dfsMenu->setGeometry(QRect(120, 100, 291, 31));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dfsMenu->sizePolicy().hasHeightForWidth());
        dfsMenu->setSizePolicy(sizePolicy);
        dfsMenu->setFont(font);
        dfsMenu->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        label_2->setGeometry(QRect(160, 10, 301, 51));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("border:none;\n"
"color: rgb(255, 255, 255);\n"
"background-color:transparent;"));
        addEdgeMenu = new QPushButton(centralwidget);
        addEdgeMenu->setObjectName("addEdgeMenu");
        addEdgeMenu->setGeometry(QRect(120, 179, 291, 31));
        addEdgeMenu->setFont(font);
        addEdgeMenu->setMouseTracking(true);
        addEdgeMenu->setStyleSheet(QString::fromUtf8(""));
        exitMenu = new QPushButton(centralwidget);
        exitMenu->setObjectName("exitMenu");
        exitMenu->setGeometry(QRect(430, 300, 71, 31));
        exitMenu->setFont(font);
        exitMenu->setStyleSheet(QString::fromUtf8(""));
        BfsMenu = new QPushButton(centralwidget);
        BfsMenu->setObjectName("BfsMenu");
        BfsMenu->setGeometry(QRect(120, 60, 291, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BfsMenu->sizePolicy().hasHeightForWidth());
        BfsMenu->setSizePolicy(sizePolicy1);
        BfsMenu->setFont(font);
        BfsMenu->setStyleSheet(QString::fromUtf8(""));
        BfsMenu->setCheckable(false);
        routesMenu = new QPushButton(centralwidget);
        routesMenu->setObjectName("routesMenu");
        routesMenu->setGeometry(QRect(120, 300, 291, 31));
        routesMenu->setFont(font);
        routesMenu->setStyleSheet(QString::fromUtf8(""));
        UpdateMenu = new QPushButton(centralwidget);
        UpdateMenu->setObjectName("UpdateMenu");
        UpdateMenu->setGeometry(QRect(120, 140, 291, 31));
        UpdateMenu->setFont(font);
        UpdateMenu->setStyleSheet(QString::fromUtf8(""));
        checkMenu = new QPushButton(centralwidget);
        checkMenu->setObjectName("checkMenu");
        checkMenu->setGeometry(QRect(120, 260, 291, 31));
        checkMenu->setFont(font);
        checkMenu->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "GuideMe", nullptr));
        label->setText(QString());
        deleteEdgeMenu->setText(QCoreApplication::translate("MainWindow", "Delete Edge", nullptr));
        dfsMenu->setText(QCoreApplication::translate("MainWindow", "Traverse the graph using DFS", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Welcome To The System", nullptr));
        addEdgeMenu->setText(QCoreApplication::translate("MainWindow", "Add Edge", nullptr));
        exitMenu->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        BfsMenu->setText(QCoreApplication::translate("MainWindow", "Traverse the graph using BFS", nullptr));
        routesMenu->setText(QCoreApplication::translate("MainWindow", "Find routes within a budget", nullptr));
        UpdateMenu->setText(QCoreApplication::translate("MainWindow", "Update transportation", nullptr));
        checkMenu->setText(QCoreApplication::translate("MainWindow", "Check if the graph is complete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
