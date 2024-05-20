#ifndef UPDATEWINDOW_H
#define UPDATEWINDOW_H

#include <QMainWindow>

namespace Ui {
class UpdateWindow;
}

class UpdateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit UpdateWindow(QWidget *parent = nullptr);
    ~UpdateWindow();

private slots:
    void on_backToMenu_clicked();

    void on_costUpdate_clicked();

    void on_addTrans_clicked();

    void on_DeleteTrans_clicked();

    void on_updateName_clicked();

    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked

private:
    Ui::UpdateWindow *ui;
    QMainWindow *mainwindow;
};

#endif // UPDATEWINDOW_H
