#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include "updatewindow.h"
#include<QPixmap>
#include "bfsdesign.h"
#include "dfsdesign.h"
#include "RoutesOptionsGui.h"
#include <QCoreApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    emit aboutToClose();
}

void MainWindow::on_BfsMenu_clicked()
{
    close();
    BFSDesign *bfsDesign=new BFSDesign(this);
    bfsDesign->show();
}

void MainWindow::on_dfsMenu_clicked()
{
    close();
    DFSDesign *dfsDesign=new DFSDesign(this);
    dfsDesign->show();
}

void MainWindow::on_UpdateMenu_clicked()
{
    close();
    UpdateWindow *updatewindow=new UpdateWindow(this);
    updatewindow->show();
}


void MainWindow::on_addEdgeMenu_clicked()
{
    close();
    addedge=new AddEdge(this);
    addedge->show();
}


void MainWindow::on_deleteEdgeMenu_clicked()
{
    close();
    deleteEdge=new DeleteEdge(this);
    deleteEdge->show();
}


void MainWindow::on_checkMenu_clicked()
{
    Graph *newGraph8;
    if(newGraph8->isComplete())
    {
        QMessageBox::information(this,"Check Complete","Graph is Complete");
    }
        else
    {
         QMessageBox::warning(this,"Check Complete","Graph is Not Complete");
    }
}


void MainWindow::on_routesMenu_clicked()
{
    close();
    FindRoutes *findroutes=new FindRoutes(this);
    findroutes->show();
}


void MainWindow::on_exitMenu_clicked()
{
    QApplication::quit();
}

