/********************************************************************************
** Form generated from reading UI file 'updatewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEWINDOW_H
#define UI_UPDATEWINDOW_H

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

class Ui_UpdateWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *costUpdate;
    QPushButton *addTrans;
    QPushButton *DeleteTrans;
    QPushButton *updateName;
    QPushButton *backToMenu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UpdateWindow)
    {
        if (UpdateWindow->objectName().isEmpty())
            UpdateWindow->setObjectName("UpdateWindow");
        UpdateWindow->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        UpdateWindow->setWindowIcon(icon);
        centralwidget = new QWidget(UpdateWindow);
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
        label->setGeometry(QRect(0, 0, 541, 351));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Downloads/OIG4_555.jpg")));
        costUpdate = new QPushButton(centralwidget);
        costUpdate->setObjectName("costUpdate");
        costUpdate->setGeometry(QRect(100, 40, 321, 51));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        costUpdate->setFont(font);
        addTrans = new QPushButton(centralwidget);
        addTrans->setObjectName("addTrans");
        addTrans->setGeometry(QRect(100, 110, 321, 51));
        addTrans->setFont(font);
        DeleteTrans = new QPushButton(centralwidget);
        DeleteTrans->setObjectName("DeleteTrans");
        DeleteTrans->setGeometry(QRect(100, 180, 321, 51));
        DeleteTrans->setFont(font);
        updateName = new QPushButton(centralwidget);
        updateName->setObjectName("updateName");
        updateName->setGeometry(QRect(100, 250, 321, 51));
        updateName->setFont(font);
        backToMenu = new QPushButton(centralwidget);
        backToMenu->setObjectName("backToMenu");
        backToMenu->setGeometry(QRect(440, 300, 91, 31));
        backToMenu->setFont(font);
        UpdateWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(UpdateWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        UpdateWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(UpdateWindow);
        statusbar->setObjectName("statusbar");
        UpdateWindow->setStatusBar(statusbar);

        retranslateUi(UpdateWindow);

        QMetaObject::connectSlotsByName(UpdateWindow);
    } // setupUi

    void retranslateUi(QMainWindow *UpdateWindow)
    {
        UpdateWindow->setWindowTitle(QCoreApplication::translate("UpdateWindow", "Update ", nullptr));
        label->setText(QString());
        costUpdate->setText(QCoreApplication::translate("UpdateWindow", "Update an Existing Transportation Cost", nullptr));
        addTrans->setText(QCoreApplication::translate("UpdateWindow", "Add a Transportation With It's Cost", nullptr));
        DeleteTrans->setText(QCoreApplication::translate("UpdateWindow", "Delete a Transportation", nullptr));
        updateName->setText(QCoreApplication::translate("UpdateWindow", "Update a Transportation Name", nullptr));
        backToMenu->setText(QCoreApplication::translate("UpdateWindow", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateWindow: public Ui_UpdateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEWINDOW_H
