#ifndef ADDTRANSPORTATION_H
#define ADDTRANSPORTATION_H

#include <QMainWindow>

namespace Ui {
class AddTransportation;
}

class AddTransportation : public QMainWindow
{
    Q_OBJECT

public:
    explicit AddTransportation(QWidget *parent = nullptr);
    ~AddTransportation();

private slots:
    void on_resetButton_clicked();

    void on_BackButton_clicked();

    void on_confirmButton_clicked();
    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked
private:
    Ui::AddTransportation *ui;
};

#endif // ADDTRANSPORTATION_H
