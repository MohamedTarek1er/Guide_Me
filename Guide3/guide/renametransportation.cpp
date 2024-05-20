#include "renametransportation.h"
#include "ui_renametransportation.h"
#include "updatewindow.h"
#include<QMessageBox>
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include "a_Updater.h"

Graph *g124;
void tempWrite88()
{
    g124->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

UpdateWindow *updatewindow4;
Graph *newGraph6;

RenameTransportation::RenameTransportation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RenameTransportation)
{
    ui->setupUi(this);
    newGraph6=new Graph();
}

RenameTransportation::~RenameTransportation()
{
    delete ui;
    delete newGraph6;
}

void RenameTransportation::on_resetButton_clicked()
{
    ui->textEdit->clear();
    ui->textEdit_2->clear();
    ui->textEdit_3->clear();
    ui->textEdit_4->clear();
}

void RenameTransportation::on_BackButton_clicked()
{
    close();
    updatewindow4=new UpdateWindow(this);
    updatewindow4->show();
}


void RenameTransportation::on_confirmButton_clicked()
{
    string sourceCity=ui->textEdit->toPlainText().toStdString();
    string destCity=ui->textEdit_2->toPlainText().toStdString();
    string transMethod=ui->textEdit_3->toPlainText().toStdString();
    string newTransName=ui->textEdit_4->toPlainText().toStdString();

    for (auto& x : sourceCity) {
        x = tolower(x);
    }
    for (auto& x : destCity) {
        x = tolower(x);
    }
    for (auto& x : transMethod) {
        x = tolower(x);
    }
    for (auto& x : newTransName) {
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
        Updater::update(sourceCity,destCity,transMethod,newTransName);
        Updater::update(destCity,sourceCity,transMethod,newTransName);

        QMessageBox::information(this,"Deleting Transportation","Deleting Transportation Successfully");

        close();
        updatewindow4=new UpdateWindow(this);
        updatewindow4->show();
    }

}

void RenameTransportation::closeEvent(QCloseEvent *event)
{
    tempWrite88();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}
