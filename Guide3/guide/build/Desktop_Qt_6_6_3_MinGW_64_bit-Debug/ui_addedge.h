/********************************************************************************
** Form generated from reading UI file 'addedge.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEDGE_H
#define UI_ADDEDGE_H

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

class Ui_AddEdge
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *confirmButton;
    QPushButton *resetButton;
    QPushButton *BackButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AddEdge)
    {
        if (AddEdge->objectName().isEmpty())
            AddEdge->setObjectName("AddEdge");
        AddEdge->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddEdge->setWindowIcon(icon);
        centralwidget = new QWidget(AddEdge);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(40, 40, 351, 31));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(40, 110, 351, 31));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(40, 180, 351, 31));
        textEdit_4 = new QTextEdit(centralwidget);
        textEdit_4->setObjectName("textEdit_4");
        textEdit_4->setGeometry(QRect(40, 250, 351, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 0, 231, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 70, 231, 41));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 150, 331, 31));
        label_3->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 220, 271, 31));
        label_4->setFont(font);
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(20, 307, 91, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        confirmButton->setFont(font1);
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(220, 310, 91, 31));
        resetButton->setFont(font1);
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(420, 310, 91, 31));
        BackButton->setFont(font1);
        AddEdge->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AddEdge);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        AddEdge->setMenuBar(menubar);
        statusbar = new QStatusBar(AddEdge);
        statusbar->setObjectName("statusbar");
        AddEdge->setStatusBar(statusbar);

        retranslateUi(AddEdge);

        QMetaObject::connectSlotsByName(AddEdge);
    } // setupUi

    void retranslateUi(QMainWindow *AddEdge)
    {
        AddEdge->setWindowTitle(QCoreApplication::translate("AddEdge", "Adding Edge", nullptr));
        label->setText(QCoreApplication::translate("AddEdge", "<html><head/><body><p>Enter Source City</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("AddEdge", "<html><head/><body><p>Enter Destination City</p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("AddEdge", "<html><head/><body><p>Enter Transportation Method</p><p><br/></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("AddEdge", "<html><head/><body><p>Enter Transportation Cost</p><p><br/></p></body></html>", nullptr));
        confirmButton->setText(QCoreApplication::translate("AddEdge", "Confirm", nullptr));
        resetButton->setText(QCoreApplication::translate("AddEdge", "Reset", nullptr));
        BackButton->setText(QCoreApplication::translate("AddEdge", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddEdge: public Ui_AddEdge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEDGE_H
