#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "updatewindow.h"
#include "addedge.h"
#include "deleteedge.h"
#include "changecost.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_BfsMenu_clicked();

    void on_dfsMenu_clicked();

    void on_UpdateMenu_clicked();

    void on_addEdgeMenu_clicked();

    void on_deleteEdgeMenu_clicked();

    void on_checkMenu_clicked();

    void on_routesMenu_clicked();

    void on_exitMenu_clicked();
signals:
     void aboutToClose();
private:
    Ui::MainWindow *ui;
    AddEdge *addedge;
    DeleteEdge *deleteEdge;
};
#endif // MAINWINDOW_H
