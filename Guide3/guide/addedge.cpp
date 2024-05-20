#include "addedge.h"
#include "ui_addedge.h"
#include "mainwindow.h"
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include<QMessageBox>

using namespace std;

Graph *g90;
void tempWrite2()
{
    g90->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

Graph *newGraph;

AddEdge::AddEdge(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::AddEdge)
{
    ui->setupUi(this);
    newGraph=new Graph();
}

AddEdge::~AddEdge()
{
    delete ui;
    delete newGraph;
}

void AddEdge::on_resetButton_clicked()
{

    ui->textEdit->setText("");
    ui->textEdit_2->setText("");
    ui->textEdit_3->setText("");
    ui->textEdit_4->setText("");
}


void AddEdge::on_BackButton_clicked()
{
    close();
    mainwindow=new MainWindow(this);
    mainwindow->show();
}

void AddEdge::on_confirmButton_clicked()
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

    if(sourceCity==""||destCity==""||transMethod==""||scost=="")
    {
        QMessageBox::warning(this,"Invalid Input","Fill All Empty Fields please!");
    }

    else
    {
        newGraph->addEdge(sourceCity,destCity,transMethod,cost);
        newGraph->addEdge(destCity,sourceCity,transMethod,cost);

        QMessageBox::information(this,"Adding Edge","Edge Added Successfully");

        close();
        mainwindow=new MainWindow(this);
        mainwindow->show();
    }
}

void AddEdge::closeEvent(QCloseEvent *event)
{
    tempWrite2();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}
