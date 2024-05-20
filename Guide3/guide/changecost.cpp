#include "changecost.h"
#include "ui_changecost.h"
#include "updatewindow.h"
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include<QMessageBox>
#include "a_Updater.h"

Graph *g212;
void tempWrite5()
{
    g212->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

UpdateWindow *updatewindow;

Graph *newGraph3;
ChangeCost::ChangeCost(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ChangeCost)
{
    ui->setupUi(this);
    newGraph3=new Graph();
}

ChangeCost::~ChangeCost()
{
    delete ui;
    delete newGraph3;
}

void ChangeCost::on_resetButton_clicked()
{
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");
    ui->textEdit_4->setText("");
}


 void ChangeCost::on_BackButton_clicked()
{
    close();
    updatewindow=new UpdateWindow(this);
    updatewindow->show();
}


void ChangeCost::on_confirmButton_clicked()
{
    string sourceCity=ui->textEdit->toPlainText().toStdString();
    string destCity=ui->textEdit_2->toPlainText().toStdString();
    string transMethod=ui->textEdit_3->toPlainText().toStdString();
    string scost=ui->textEdit_4->toPlainText().toStdString();
    int cost=QString::fromStdString(scost).toInt();

    for (auto& x : sourceCity) {
        x = tolower(x);
    }
    for (auto& x : destCity) {
        x = tolower(x);
    }
    for (auto& x : transMethod) {
        x = tolower(x);
    }

    bool found=false;
    if(Graph::checkValid(sourceCity,destCity))
    {
        for(auto entry:Graph::adjList)
        {
            if(entry.first.first==sourceCity&&entry.first.second==destCity)
            {
                for(auto trans:entry.second)
                {
                    if(trans.transportationMethod==transMethod)
                    {
                        found=true;
                        break;
                    }
                }
            }
        }
    }

    if(!found)
    {
        QMessageBox::warning(this,"Invalid Input","Write Valid Cities or Transportation");

    }
    else
    {
        Updater::update(sourceCity,destCity,transMethod,cost,1);
        Updater::update(destCity,sourceCity,transMethod,cost,1);
        QMessageBox::information(this,"Changing Cost","Cost Changed Successfully");

        close();
        updatewindow=new UpdateWindow(this);
        updatewindow->show();
    }

}
void ChangeCost::closeEvent(QCloseEvent *event)
{
    tempWrite5();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}
