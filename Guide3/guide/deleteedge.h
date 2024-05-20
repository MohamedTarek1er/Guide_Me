#ifndef DELETEEDGE_H
#define DELETEEDGE_H

#include <QMainWindow>

namespace Ui {
class DeleteEdge;
}

class DeleteEdge : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteEdge(QWidget *parent = nullptr);
    ~DeleteEdge();

private slots:
    void on_resetButton_clicked();

    void on_BackButton_clicked();

    void on_confirmButton_clicked();
    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked
private:
    Ui::DeleteEdge *ui;
    QMainWindow *mainwindow;
};

#endif // DELETEEDGE_H
