#include "dfsdesign.h"
#include "ui_dfsdesign.h"
#include "mainwindow.h"
#include "a_Edge.h"
#include "a_Graph.h"
#include<QMessageBox>
#include <QDebug>
#include <QPainter>
#include <QRandomGenerator>
#include <QPointF>
#include <QGraphicsEllipseItem>
#include<QLabel>
#include<QString>
#include <QTextEdit>
#include <QGridLayout>
#include <QScrollArea>
#include<queue>
#include "a_DFSClass.h"

Graph *g567;
void tempWrite8()
{
    g567->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

QString text1;

DFSDesign::DFSDesign(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DFSDesign)
{
    ui->setupUi(this);
}

DFSDesign::~DFSDesign()
{
     delete ui;
}

void DFSDesign::on_pushButton_2_clicked()
{
     text1="";
     drawGraph();
}

void DFSDesign::drawGraph()
{
    string startNode = ui->textEdit->toPlainText().toStdString();

    for (auto& x : startNode) {
        x = tolower(x);
    }

    bool found=false;

    for(auto x:Graph::adjList)
    {
        if(x.first.first==startNode)
        {
            found=true;
            break;
        }
    }
    if(!found)
    {
        QMessageBox::warning(this,"Invalid Input","Write Valid City");
    }
    else
    {
        DFSClass::performDFS(startNode);

        // Create a copy of the DFSQueue
        queue<string> dfsQueueCopy = DFSClass::DFSQueue;

        while (!dfsQueueCopy.empty())
        {
            string src = dfsQueueCopy.front();

            text1 += QString::fromStdString(src) + "\n";
            dfsQueueCopy.pop();
        }

        // Create a QTextEdit widget to display the text
        QTextEdit *textEdit = new QTextEdit();
        textEdit->setText(text1);
        textEdit->setReadOnly(true); // Make it read-only

        // Set the widget as the content of the scroll area
        ui->scrollArea->setWidget(textEdit);
    }

}



void DFSDesign::on_pushButton_clicked()
{
    close();
    mainwindow=new MainWindow(this);
    mainwindow->show();

}

void DFSDesign::closeEvent(QCloseEvent *event)
{
    tempWrite8();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}
