/********************************************************************************
** Form generated from reading UI file 'deleteedge.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEEDGE_H
#define UI_DELETEEDGE_H

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

class Ui_DeleteEdge
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QPushButton *confirmButton;
    QTextEdit *textEdit;
    QPushButton *resetButton;
    QPushButton *BackButton;
    QLabel *label;
    QTextEdit *textEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DeleteEdge)
    {
        if (DeleteEdge->objectName().isEmpty())
            DeleteEdge->setObjectName("DeleteEdge");
        DeleteEdge->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        DeleteEdge->setWindowIcon(icon);
        centralwidget = new QWidget(DeleteEdge);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 160, 231, 41));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_2->setFont(font);
        confirmButton = new QPushButton(centralwidget);
        confirmButton->setObjectName("confirmButton");
        confirmButton->setGeometry(QRect(30, 270, 91, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        confirmButton->setFont(font1);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(20, 110, 351, 31));
        resetButton = new QPushButton(centralwidget);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(220, 270, 91, 31));
        resetButton->setFont(font1);
        BackButton = new QPushButton(centralwidget);
        BackButton->setObjectName("BackButton");
        BackButton->setGeometry(QRect(410, 270, 91, 31));
        BackButton->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 231, 41));
        label->setFont(font);
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(20, 200, 351, 31));
        DeleteEdge->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DeleteEdge);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        DeleteEdge->setMenuBar(menubar);
        statusbar = new QStatusBar(DeleteEdge);
        statusbar->setObjectName("statusbar");
        DeleteEdge->setStatusBar(statusbar);

        retranslateUi(DeleteEdge);

        QMetaObject::connectSlotsByName(DeleteEdge);
    } // setupUi

    void retranslateUi(QMainWindow *DeleteEdge)
    {
        DeleteEdge->setWindowTitle(QCoreApplication::translate("DeleteEdge", "Delete Edge", nullptr));
        label_2->setText(QCoreApplication::translate("DeleteEdge", "<html><head/><body><p>Enter Second City</p></body></html>", nullptr));
        confirmButton->setText(QCoreApplication::translate("DeleteEdge", "Confirm", nullptr));
        resetButton->setText(QCoreApplication::translate("DeleteEdge", "Reset", nullptr));
        BackButton->setText(QCoreApplication::translate("DeleteEdge", "Back", nullptr));
        label->setText(QCoreApplication::translate("DeleteEdge", "<html><head/><body><p>Enter First City</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteEdge: public Ui_DeleteEdge {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEEDGE_H
