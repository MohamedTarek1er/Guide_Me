#include "bfsdesign.h"
#include "ui_bfsdesign.h"
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
#include "a_BFSClass.h"

Graph *g334;
void tempWrite4()
{
    g334->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

QString Vertices;
QString edges1;
QString mainText;
QString text;

BFSDesign::BFSDesign(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::BFSDesign)
{
    ui->setupUi(this);
}

BFSDesign::~BFSDesign()
{
    delete ui;
}

void BFSDesign::on_pushButton_clicked()
{
    text="";

    drawGraph();
}

void BFSDesign::drawGraph()
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
        BFSClass::traverse(startNode);

        for (auto& entry : BFSClass::BFSVector)
        {
            string src = entry.first.first;
            string dest = entry.first.second;

            text += QString::fromStdString(src) + " -> " + QString::fromStdString(dest) + "\n"; // Convert std::string to QString

            if (entry.first.first == src && entry.first.second == dest)
            {
                for (auto& trans : entry.second)
                {
                    string cost = to_string(trans.cost);
                    edges1 += "\t" + QString::fromStdString(trans.transportationMethod) + " " + QString::fromStdString(cost) + "\n"; // Convert std::string to QString
                }
            }
            text += edges1;
            edges1 = "";
        }
        // Create a QTextEdit widget to display the text
        QTextEdit *textEdit = new QTextEdit();
        textEdit->setText(text);
        textEdit->setReadOnly(true); // Make it read-only

        // Set the widget as the content of the scroll area
        ui->scrollArea->setWidget(textEdit);
    }

}


void BFSDesign::on_pushButton_2_clicked()
{
    close();
    mainwindow=new MainWindow(this);
    mainwindow->show();
}
void BFSDesign::closeEvent(QCloseEvent *event)
{
    tempWrite4();
    emit closeButtonClicked(); // Emit the signal when the window is about to close
    QMainWindow::closeEvent(event);
}
