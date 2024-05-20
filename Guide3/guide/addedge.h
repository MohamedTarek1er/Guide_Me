#ifndef ADDEDGE_H
#define ADDEDGE_H

#include <QMainWindow>

namespace Ui {
class AddEdge;
}

class AddEdge : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddEdge(QWidget *parent = nullptr);
    ~AddEdge();

private slots:
    void on_resetButton_clicked();

    void on_BackButton_clicked();

    void on_confirmButton_clicked();
    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked
private:
    Ui::AddEdge *ui;
    QMainWindow *mainwindow;
};

#endif // ADDEDGE_H
