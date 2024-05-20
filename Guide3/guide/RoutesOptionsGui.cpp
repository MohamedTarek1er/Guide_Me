#include "RoutesOptionsGui.h"
#include "ui_RoutesOptionsGui.h"
#include "mainwindow.h"
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include<QMessageBox>
#include <QPainter>
#include <QRandomGenerator>
#include <QPointF>
#include <QGraphicsEllipseItem>
#include<QLabel>
#include<QString>
#include <QTextEdit>
#include <QGridLayout>
#include <QScrollArea>
#include "a_RoutesOptions.h"

Graph *g128;
void tempWrite9()
{
    g128->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

QMainWindow *mainwindow45;
QString text2;

FindRoutes::FindRoutes(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FindRoutes)
{
    ui->setupUi(this);
}

FindRoutes::~FindRoutes()
{
    delete ui;
}

void FindRoutes::on_pushButton_clicked()
{
    close();
    mainwindow45=new MainWindow(this);
    mainwindow45->show();
}


void FindRoutes::on_FindBTN_clicked()
{
    text2="";
   drawRoutes();
}


void FindRoutes::drawRoutes()
{
    string SourceCity = ui->s->toPlainText().toStdString();
    string destCity = ui->destText->toPlainText().toStdString();
    string strBudget = ui->budgetText->toPlainText().toStdString();
    int budget=QString::fromStdString(strBudget).toInt();

    for (auto& x : SourceCity) {
        x = tolower(x);
    }
    for (auto& x : destCity) {
        x = tolower(x);
    }

    RoutesOptions::findOptions(SourceCity,destCity,budget);

    bool found=true;

    if(RoutesOptions::options.front().second=="")
    {
        QMessageBox::warning(this,"No Path","Write Valid Cities");
        found=false;
    }

    else if(!(RoutesOptions::options.front().second==""))
    {
        if(budget<=0)
        {
            QMessageBox::warning(this,"Invalid Budget","Write Suitable Budget");
            found=false;
        }
    }

    if(found)
    {
        int optionsSize = RoutesOptions::options.size();
        string NumOfOptionsSize =to_string(optionsSize);

        text2+="You Have "+ QString::fromStdString(NumOfOptionsSize) + " Possible Options:"+"\n\n";

        int optionsNum=0;

        for(auto& entry:RoutesOptions::options)
        {
            optionsNum++;
            string numOfOptions =to_string(optionsNum);

            string total_cost = to_string(entry.first);

            text2+= QString::fromStdString(numOfOptions) +"- Total Cost: $" +
                     QString::fromStdString(total_cost) +", Route: " +
                     QString::fromStdString(entry.second) + "\n\n";
        }

        QTextEdit *textEdit1 = new QTextEdit();

        textEdit1->setText(text2);
        textEdit1->setReadOnly(true);

        ui->scrollArea->setWidget(textEdit1);
    }
}

void FindRoutes::closeEvent(QCloseEvent *event)
{
    tempWrite9();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}
