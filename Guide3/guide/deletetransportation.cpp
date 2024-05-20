#include "deletetransportation.h"
#include "ui_deletetransportation.h"
#include "updatewindow.h"
#include<QMessageBox>
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include "a_Updater.h"

Graph *g767;
void tempWrite7()
{
    g767->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

UpdateWindow *updatewindow3;

DeleteTransportation::DeleteTransportation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DeleteTransportation)
{
    ui->setupUi(this);
}

DeleteTransportation::~DeleteTransportation()
{
    delete ui;
}

void DeleteTransportation::on_resetButton_clicked()
{
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");
}

void DeleteTransportation::on_BackButton_clicked()
{
    close();
    updatewindow3=new UpdateWindow(this);
    updatewindow3->show();
}

void DeleteTransportation::on_confirmButton_clicked()
{
    string sourceCity=ui->textEdit->toPlainText().toStdString();
    string destCity=ui->textEdit_2->toPlainText().toStdString();
    string transMethod=ui->textEdit_3->toPlainText().toStdString();

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
        Updater::update(sourceCity,destCity,transMethod);
        Updater::update(destCity,sourceCity,transMethod);

        QMessageBox::information(this,"Deleting Transportation","Deleting Transportation Successfully");

        close();
        updatewindow3=new UpdateWindow(this);
        updatewindow3->show();
    }
}

void DeleteTransportation::closeEvent(QCloseEvent *event)
{
    tempWrite7();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}
