/********************************************************************************
** Form generated from reading UI file 'bfsdesign.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BFSDESIGN_H
#define UI_BFSDESIGN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

class Ui_BFSDesign
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BFSDesign)
    {
        if (BFSDesign->objectName().isEmpty())
            BFSDesign->setObjectName("BFSDesign");
        BFSDesign->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        BFSDesign->setWindowIcon(icon);
        centralwidget = new QWidget(BFSDesign);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 210, 80, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 70, 321, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 30, 291, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 110, 391, 221));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 389, 219));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(450, 280, 80, 41));
        pushButton_2->setFont(font);
        BFSDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BFSDesign);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        BFSDesign->setMenuBar(menubar);
        statusbar = new QStatusBar(BFSDesign);
        statusbar->setObjectName("statusbar");
        BFSDesign->setStatusBar(statusbar);

        retranslateUi(BFSDesign);

        QMetaObject::connectSlotsByName(BFSDesign);
    } // setupUi

    void retranslateUi(QMainWindow *BFSDesign)
    {
        BFSDesign->setWindowTitle(QCoreApplication::translate("BFSDesign", "BFS", nullptr));
        pushButton->setText(QCoreApplication::translate("BFSDesign", "visualize", nullptr));
        label_2->setText(QCoreApplication::translate("BFSDesign", "Enter The Starting City", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BFSDesign", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BFSDesign: public Ui_BFSDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BFSDESIGN_H
