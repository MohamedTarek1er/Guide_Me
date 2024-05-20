/********************************************************************************
** Form generated from reading UI file 'changecost.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECOST_H
#define UI_CHANGECOST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeCost
{
public:
    QWidget *centralwidget;
    QPushButton *confirmButton;
    QTextEdit *textEdit;
    QLabel *label_3;
    QPushButton *resetButton;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QLabel *label;
    QPushButton *BackButton;
    QTextEdit *textEdit_4;
    QLabel *label_4;
    QTextEdit *textEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChangeCost)
    {
        if (ChangeCost->objectName().isEmpty())
            ChangeCost->setObjectName("ChangeCost");
        ChangeCost->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        ChangeCost->setWindowIcon(icon);
        centralwidget = new QWidget(ChangeCost);
        centralwidget->setObjectName("centralwidget");
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(10, 307, 91, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        confirmButton->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 40, 351, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 150, 321, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_3->setFont(font1);
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(210, 310, 91, 31));
        resetButton->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 80, 261, 31));
        label_2->setFont(font1);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(30, 110, 351, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 231, 31));
        label->setFont(font1);
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(410, 310, 91, 31));
        BackButton->setFont(font);
        textEdit_4 = new QTextEdit(centralwidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(30, 250, 351, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 220, 261, 31));
        label_4->setFont(font1);
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(30, 180, 351, 31));
        ChangeCost->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChangeCost);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        ChangeCost->setMenuBar(menubar);
        statusbar = new QStatusBar(ChangeCost);
        statusbar->setObjectName("statusbar");
        ChangeCost->setStatusBar(statusbar);

        retranslateUi(ChangeCost);

        QMetaObject::connectSlotsByName(ChangeCost);
    } // setupUi

    void retranslateUi(QMainWindow *ChangeCost)
    {
        ChangeCost->setWindowTitle(QCoreApplication::translate("ChangeCost", "Changing Cost", nullptr));
        confirmButton->setText(QCoreApplication::translate("ChangeCost", "Confirm", nullptr));
        label_3->setText(QCoreApplication::translate("ChangeCost", "<html><head/><body><p>Enter Transportation Method</p><p><br/></p></body></html>", nullptr));
        resetButton->setText(QCoreApplication::translate("ChangeCost", "Reset", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeCost", "<html><head/><body><p>Enter Destination City</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("ChangeCost", "<html><head/><body><p>Enter Source City</p></body></html>", nullptr));
        BackButton->setText(QCoreApplication::translate("ChangeCost", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("ChangeCost", "<html><head/><body><p>Enter New Cost</p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeCost: public Ui_ChangeCost {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECOST_H
