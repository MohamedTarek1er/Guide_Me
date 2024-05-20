#ifndef DFSDESIGN_H
#define DFSDESIGN_H

#include <QMainWindow>
#include "mainwindow.h"
#include <QDebug>
#include "a_Edge.h"
#include "a_Graph.h"
#include<QMessageBox>

namespace Ui {
class DFSDesign;
}

class DFSDesign : public QMainWindow
{
    Q_OBJECT

public:
    explicit DFSDesign(QWidget *parent = nullptr);
    ~DFSDesign();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked
private:
    Ui::DFSDesign *ui;
    QMainWindow *mainwindow;
    void drawGraph(); // Method to draw the graph in the scene
};

#endif // DFSDESIGN_H
