#ifndef DELETETRANSPORTATION_H
#define DELETETRANSPORTATION_H

#include <QMainWindow>

namespace Ui {
class DeleteTransportation;
}

class DeleteTransportation : public QMainWindow
{
    Q_OBJECT

public:
    explicit DeleteTransportation(QWidget *parent = nullptr);
    ~DeleteTransportation();

private slots:
    void on_resetButton_clicked();

    void on_BackButton_clicked();

    void on_confirmButton_clicked();
    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked
private:
    Ui::DeleteTransportation *ui;
};

#endif // DELETETRANSPORTATION_H
