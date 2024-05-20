/********************************************************************************
** Form generated from reading UI file 'renametransportation.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMETRANSPORTATION_H
#define UI_RENAMETRANSPORTATION_H

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

class Ui_RenameTransportation
{
public:
    QWidget *centralwidget;
    QPushButton *resetButton;
    QPushButton *BackButton;
    QPushButton *confirmButton;
    QLabel *label;
    QLabel *label_4;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit;
    QLabel *label_3;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *RenameTransportation)
    {
        if (RenameTransportation->objectName().isEmpty())
            RenameTransportation->setObjectName("RenameTransportation");
        RenameTransportation->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        RenameTransportation->setWindowIcon(icon);
        centralwidget = new QWidget(RenameTransportation);
        centralwidget->setObjectName("centralwidget");
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(210, 300, 91, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        resetButton->setFont(font);
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(410, 300, 91, 31));
        BackButton->setFont(font);
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(10, 297, 91, 31));
        confirmButton->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 0, 261, 31));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 210, 281, 31));
        label_4->setFont(font1);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(30, 100, 351, 31));
        textEdit_4 = new QTextEdit(centralwidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(30, 240, 351, 31));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(30, 170, 351, 31));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 30, 351, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 311, 41));
        label_3->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 271, 31));
        label_2->setFont(font1);
        RenameTransportation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(RenameTransportation);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        RenameTransportation->setMenuBar(menubar);
        statusbar = new QStatusBar(RenameTransportation);
        statusbar->setObjectName("statusbar");
        RenameTransportation->setStatusBar(statusbar);

        retranslateUi(RenameTransportation);

        QMetaObject::connectSlotsByName(RenameTransportation);
    } // setupUi

    void retranslateUi(QMainWindow *RenameTransportation)
    {
        RenameTransportation->setWindowTitle(QCoreApplication::translate("RenameTransportation", "Rename Transportation", nullptr));
        resetButton->setText(QCoreApplication::translate("RenameTransportation", "Reset", nullptr));
        BackButton->setText(QCoreApplication::translate("RenameTransportation", "Back", nullptr));
        confirmButton->setText(QCoreApplication::translate("RenameTransportation", "Confirm", nullptr));
        label->setText(QCoreApplication::translate("RenameTransportation", "<html><head/><body><p>Enter Source City</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("RenameTransportation", "<html><head/><body><p>Enter New Name</p><p><br/></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("RenameTransportation", "<html><head/><body><p>Enter Transportation Method</p><p><br/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("RenameTransportation", "<html><head/><body><p>Enter Destination City</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RenameTransportation: public Ui_RenameTransportation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMETRANSPORTATION_H
