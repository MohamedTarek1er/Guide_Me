#include "deleteedge.h"
#include "ui_deleteedge.h"
#include "mainwindow.h"
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include<QMessageBox>

Graph *g233;
void tempWrite6()
{
    g233->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

Graph *newGraph1;
DeleteEdge::DeleteEdge(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DeleteEdge)
{
    ui->setupUi(this);
    newGraph1=new Graph();
}

DeleteEdge::~DeleteEdge()
{
    delete ui;
    delete newGraph1;
}

void DeleteEdge::on_resetButton_clicked()
{
    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
}


void DeleteEdge::on_BackButton_clicked()
{
    close();
    mainwindow=new MainWindow(this);
    mainwindow->show();
}


void DeleteEdge::on_confirmButton_clicked()
{
    string sourceCity=ui->textEdit->toPlainText().toStdString();
    string destCity=ui->textEdit_2->toPlainText().toStdString();

    for (auto& x : sourceCity) {
        x = tolower(x);
    }
    for (auto& x : destCity) {
        x = tolower(x);
    }

    if(!Graph::checkValid(sourceCity,destCity))
    {
        QMessageBox::warning(this,"Invalid Cities","Write valid Cities");
    }
    else
    {
        newGraph1->deleteEdge(sourceCity,destCity);
        newGraph1->deleteEdge(destCity,sourceCity);

        QMessageBox::information(this,"Deleting Edge","Edge Deleted Successfully");

        close();
        mainwindow=new MainWindow(this);
        mainwindow->show();
    }

}

void DeleteEdge::closeEvent(QCloseEvent *event)
{
    tempWrite6();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}
