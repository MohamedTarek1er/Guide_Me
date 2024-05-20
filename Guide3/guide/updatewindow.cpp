#include "updatewindow.h"
#include "ui_updatewindow.h"
#include "mainwindow.h"
#include "changecost.h"
#include "addtransportation.h"
#include "deletetransportation.h"
#include "renametransportation.h"
#include <QCoreApplication>
#include <QApplication>
#include "a_Graph.h"

Graph *g12;
void tempWrite1()
{
    g12->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

UpdateWindow::UpdateWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::UpdateWindow)
{
    ui->setupUi(this);
}

UpdateWindow::~UpdateWindow()
{
    delete ui;
}

void UpdateWindow::on_costUpdate_clicked()
{
    close();
    ChangeCost *changecost=new ChangeCost(this);
    changecost->show();
}

void UpdateWindow::on_addTrans_clicked()
{
    close();
    AddTransportation *addTrans=new AddTransportation(this);
    addTrans->show();
}


void UpdateWindow::on_DeleteTrans_clicked()
{
    close();
    DeleteTransportation *deleteTrans=new DeleteTransportation(this);
    deleteTrans->show();
}

void UpdateWindow::on_updateName_clicked()
{
    close();
    RenameTransportation *renameTrans=new RenameTransportation(this);
    renameTrans->show();

}

void UpdateWindow::on_backToMenu_clicked()
{
    close();
    mainwindow=new MainWindow(this);
    mainwindow->show();
}

void UpdateWindow::closeEvent(QCloseEvent *event)
{
    tempWrite1();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}









