#ifndef BFSDESIGN_H
#define BFSDESIGN_H

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPointF>
#include <QGraphicsEllipseItem>
#include <QGraphicsTextItem>
#include "a_Graph.h" // Include Graph class header file
#include <QMainWindow>

namespace Ui {
class BFSDesign;
}

class BFSDesign : public QMainWindow
{
    Q_OBJECT

public:
    explicit BFSDesign(QWidget *parent = nullptr);
    ~BFSDesign();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked

private:
    Ui::BFSDesign *ui;
    void drawGraph(); // Method to draw the graph in the scene
    QMainWindow *mainwindow;
};

#endif // BFSDESIGN_H
