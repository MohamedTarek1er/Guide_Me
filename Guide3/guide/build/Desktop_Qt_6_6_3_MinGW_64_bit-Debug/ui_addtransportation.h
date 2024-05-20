/********************************************************************************
** Form generated from reading UI file 'addtransportation.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTRANSPORTATION_H
#define UI_ADDTRANSPORTATION_H

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

class Ui_AddTransportation
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

    void setupUi(QMainWindow *AddTransportation)
    {
        if (AddTransportation->objectName().isEmpty())
            AddTransportation->setObjectName("AddTransportation");
        AddTransportation->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddTransportation->setWindowIcon(icon);
        centralwidget = new QWidget(AddTransportation);
        centralwidget->setObjectName("centralwidget");
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(10, 297, 91, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        confirmButton->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 30, 351, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 391, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_3->setFont(font1);
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(210, 300, 91, 31));
        resetButton->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 271, 31));
        label_2->setFont(font1);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(30, 100, 351, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 0, 231, 31));
        label->setFont(font1);
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(410, 300, 91, 31));
        BackButton->setFont(font);
        textEdit_4 = new QTextEdit(centralwidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(30, 240, 351, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 210, 281, 31));
        label_4->setFont(font1);
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(30, 170, 351, 31));
        AddTransportation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddTransportation);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        AddTransportation->setMenuBar(menubar);
        statusbar = new QStatusBar(AddTransportation);
        statusbar->setObjectName("statusbar");
        AddTransportation->setStatusBar(statusbar);

        retranslateUi(AddTransportation);

        QMetaObject::connectSlotsByName(AddTransportation);
    } // setupUi

    void retranslateUi(QMainWindow *AddTransportation)
    {
        AddTransportation->setWindowTitle(QCoreApplication::translate("AddTransportation", "Add Transportation", nullptr));
        confirmButton->setText(QCoreApplication::translate("AddTransportation", "Confirm", nullptr));
        label_3->setText(QCoreApplication::translate("AddTransportation", "<html><head/><body><p>Enter New Transportation Method</p><p><br/></p></body></html>", nullptr));
        resetButton->setText(QCoreApplication::translate("AddTransportation", "Reset", nullptr));
        label_2->setText(QCoreApplication::translate("AddTransportation", "<html><head/><body><p>Enter Destination City</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("AddTransportation", "<html><head/><body><p>Enter Source City</p></body></html>", nullptr));
        BackButton->setText(QCoreApplication::translate("AddTransportation", "Back", nullptr));
        label_4->setText(QCoreApplication::translate("AddTransportation", "<html><head/><body><p>Enter Transportation Cost</p><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddTransportation: public Ui_AddTransportation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTRANSPORTATION_H
