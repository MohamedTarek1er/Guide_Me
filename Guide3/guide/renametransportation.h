#ifndef RENAMETRANSPORTATION_H
#define RENAMETRANSPORTATION_H

#include <QMainWindow>

namespace Ui {
class RenameTransportation;
}

class RenameTransportation : public QMainWindow
{
    Q_OBJECT

public:
    explicit RenameTransportation(QWidget *parent = nullptr);
    ~RenameTransportation();

private slots:
    void on_resetButton_clicked();

    void on_BackButton_clicked();

    void on_confirmButton_clicked();
    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked
private:
    Ui::RenameTransportation *ui;
};

#endif // RENAMETRANSPORTATION_H
