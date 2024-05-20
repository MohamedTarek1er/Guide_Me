/********************************************************************************
** Form generated from reading UI file 'deletetransportation.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETETRANSPORTATION_H
#define UI_DELETETRANSPORTATION_H

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

class Ui_DeleteTransportation
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
    QTextEdit *textEdit_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteTransportation)
    {
        if (DeleteTransportation->objectName().isEmpty())
            DeleteTransportation->setObjectName("DeleteTransportation");
        DeleteTransportation->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteTransportation->setWindowIcon(icon);
        centralwidget = new QWidget(DeleteTransportation);
        centralwidget->setObjectName("centralwidget");
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(30, 280, 91, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        confirmButton->setFont(font);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 50, 351, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 190, 321, 41));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_3->setFont(font1);
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(200, 280, 91, 31));
        resetButton->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 90, 231, 41));
        label_2->setFont(font1);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(30, 130, 351, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 231, 31));
        label->setFont(font1);
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(410, 280, 91, 31));
        BackButton->setFont(font);
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(30, 220, 351, 31));
        DeleteTransportation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeleteTransportation);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        DeleteTransportation->setMenuBar(menubar);
        statusbar = new QStatusBar(DeleteTransportation);
        statusbar->setObjectName("statusbar");
        DeleteTransportation->setStatusBar(statusbar);

        retranslateUi(DeleteTransportation);

        QMetaObject::connectSlotsByName(DeleteTransportation);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteTransportation)
    {
        DeleteTransportation->setWindowTitle(QCoreApplication::translate("DeleteTransportation", "Delete Transportation", nullptr));
        confirmButton->setText(QCoreApplication::translate("DeleteTransportation", "Confirm", nullptr));
        label_3->setText(QCoreApplication::translate("DeleteTransportation", "<html><head/><body><p>Enter Transportation Method</p><p><br/></p></body></html>", nullptr));
        resetButton->setText(QCoreApplication::translate("DeleteTransportation", "Reset", nullptr));
        label_2->setText(QCoreApplication::translate("DeleteTransportation", "<html><head/><body><p>Enter Destination City</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("DeleteTransportation", "<html><head/><body><p>Enter Source City</p></body></html>", nullptr));
        BackButton->setText(QCoreApplication::translate("DeleteTransportation", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteTransportation: public Ui_DeleteTransportation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETETRANSPORTATION_H
