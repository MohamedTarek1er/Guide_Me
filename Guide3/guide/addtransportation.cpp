#include "addtransportation.h"
#include "ui_addtransportation.h"
#include "updatewindow.h"
#include<QMessageBox>
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include "a_Updater.h"

Graph *g78;
void tempWrite3()
{
    g78->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

UpdateWindow *updatewindow2;

AddTransportation::AddTransportation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddTransportation)
{
    ui->setupUi(this);
}

AddTransportation::~AddTransportation()
{
    delete ui;
}

void AddTransportation::on_resetButton_clicked()
{
    ui->textEdit->setText("");
     ui->textEdit_2->setText("");
     ui->textEdit_3->setText("");
      ui->textEdit_4->setText("");
}


void AddTransportation::on_BackButton_clicked()
{
    close();
    updatewindow2=new UpdateWindow(this);
    updatewindow2->show();
}

void AddTransportation::on_confirmButton_clicked()
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

    if(!Graph::checkValid(sourceCity,destCity))
    {
        QMessageBox::warning(this,"Invalid Cities","Write Valid Cities");
    }
    else
    {
        Updater::update(sourceCity,destCity,transMethod,cost,2);
        Updater::update(destCity,sourceCity,transMethod,cost,2);

        QMessageBox::information(this,"Adding Transportation","Transportation Added Successfully");

        close();
        updatewindow2=new UpdateWindow(this);
        updatewindow2->show();
    }

}
void AddTransportation::closeEvent(QCloseEvent *event)
{
    tempWrite3();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}
