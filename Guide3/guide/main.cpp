#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <vector>
#include <string>
#include<algorithm>
#include <stack>
#include<deque>
#include<utility>
#include<map>
#include<set>
#include<queue>
#include<math.h>
#include<unordered_map>
#include <iomanip>
#include<iterator>
#include<fstream>
#include<sstream>
#include <QApplication>
#include <QMessageBox>
#include <QLabel>
#include "a_Graph.h"
#include "a_Edge.h"
#include <QFile>
#include <QTextStream>
#include<QDebug>
#include "updatewindow.h"

Graph *firstGraph = new Graph();
 void tempWrite()
{
    firstGraph->writeToFile("C:\\Users\\MENA\\GuideMeq.txt");
}

int main(int argc, char *argv[])
{
    firstGraph->readFromFile("C:\\Users\\MENA\\GuideMeq.txt");

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    QObject::connect(&a, &QCoreApplication::aboutToQuit, tempWrite);

    return a.exec();
}


