#ifndef CHANGECOST_H
#define CHANGECOST_H

#include <QMainWindow>

namespace Ui {
class ChangeCost;
}

class ChangeCost : public QMainWindow
{
    Q_OBJECT

public:
    explicit ChangeCost(QWidget *parent = nullptr);
    ~ChangeCost();

private slots:
    void on_resetButton_clicked();

    void on_BackButton_clicked();

    void on_confirmButton_clicked();
    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked
private:
    Ui::ChangeCost *ui;
};

#endif // CHANGECOST_H
