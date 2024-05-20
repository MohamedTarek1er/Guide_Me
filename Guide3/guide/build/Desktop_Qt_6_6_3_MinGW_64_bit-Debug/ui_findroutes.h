/********************************************************************************
** Form generated from reading UI file 'findroutes.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDROUTES_H
#define UI_FINDROUTES_H

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

class Ui_FindRoutes
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label_3;
    QTextEdit *budgetText;
    QLabel *label;
    QTextEdit *s;
    QTextEdit *destText;
    QLabel *label_2;
    QPushButton *FindBTN;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FindRoutes)
    {
        if (FindRoutes->objectName().isEmpty())
            FindRoutes->setObjectName("FindRoutes");
        FindRoutes->resize(550, 380);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Downloads/icons8-map-94.png"), QSize(), QIcon::Normal, QIcon::Off);
        FindRoutes->setWindowIcon(icon);
        centralwidget = new QWidget(FindRoutes);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(450, 290, 80, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        pushButton->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(400, 10, 331, 31));
        label_3->setFont(font);
        budgetText = new QTextEdit(centralwidget);
        budgetText->setObjectName("budgetText");
        budgetText->setGeometry(QRect(390, 40, 141, 31));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 0, 231, 41));
        label->setFont(font);
        s = new QTextEdit(centralwidget);
        s->setObjectName("s");
        s->setGeometry(QRect(10, 40, 161, 31));
        destText = new QTextEdit(centralwidget);
        destText->setObjectName("destText");
        destText->setGeometry(QRect(180, 40, 191, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 0, 231, 41));
        label_2->setFont(font);
        FindBTN = new QPushButton(centralwidget);
        FindBTN->setObjectName("FindBTN");
        FindBTN->setGeometry(QRect(450, 240, 80, 41));
        FindBTN->setFont(font);
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(30, 100, 401, 241));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 399, 239));
        scrollArea->setWidget(scrollAreaWidgetContents);
        FindRoutes->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FindRoutes);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 17));
        FindRoutes->setMenuBar(menubar);
        statusbar = new QStatusBar(FindRoutes);
        statusbar->setObjectName("statusbar");
        FindRoutes->setStatusBar(statusbar);

        retranslateUi(FindRoutes);

        QMetaObject::connectSlotsByName(FindRoutes);
    } // setupUi

    void retranslateUi(QMainWindow *FindRoutes)
    {
        FindRoutes->setWindowTitle(QCoreApplication::translate("FindRoutes", "FindRoutes", nullptr));
        pushButton->setText(QCoreApplication::translate("FindRoutes", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("FindRoutes", "<html><head/><body><p>Enter Your Budget</p><p><br/></p><p><br/></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("FindRoutes", "<html><head/><body><p>Enter Source City</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("FindRoutes", "<html><head/><body><p>Enter Destination City</p></body></html>", nullptr));
        FindBTN->setText(QCoreApplication::translate("FindRoutes", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindRoutes: public Ui_FindRoutes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDROUTES_H
