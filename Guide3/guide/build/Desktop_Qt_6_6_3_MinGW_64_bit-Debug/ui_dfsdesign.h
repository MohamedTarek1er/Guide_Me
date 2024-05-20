/********************************************************************************
** Form generated from reading UI file 'dfsdesign.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFSDESIGN_H
#define UI_DFSDESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DFSDesign
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DFSDesign)
    {
        if (DFSDesign->objectName().isEmpty())
            DFSDesign->setObjectName("DFSDesign");
        DFSDesign->resize(550, 380);
        centralwidget = new QWidget(DFSDesign);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 290, 80, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 220, 80, 41));
        pushButton_2->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 291, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 100, 401, 241));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 399, 239));
        scrollArea->setWidget(scrollAreaWidgetContents);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 50, 321, 31));
        DFSDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DFSDesign);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        DFSDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(DFSDesign);
        statusbar->setObjectName("statusbar");
        DFSDesign->setStatusBar(statusbar);

        retranslateUi(DFSDesign);

        QMetaObject::connectSlotsByName(DFSDesign);
    } // setupUi

    void retranslateUi(QMainWindow *DFSDesign)
    {
        DFSDesign->setWindowTitle(QCoreApplication::translate("DFSDesign", "DFS", nullptr));
        pushButton->setText(QCoreApplication::translate("DFSDesign", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("DFSDesign", "Visualize", nullptr));
        label_2->setText(QCoreApplication::translate("DFSDesign", "Enter The Starting City", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFSDesign: public Ui_DFSDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFSDESIGN_H
