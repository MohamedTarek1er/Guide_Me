#ifndef ROUTESOPTIONSGUI_H
#define ROUTESOPTIONSGUI_H

#include <QMainWindow>

namespace Ui {
class FindRoutes;
}

class FindRoutes : public QMainWindow
{
    Q_OBJECT

public:
    explicit FindRoutes(QWidget *parent = nullptr);
    ~FindRoutes();

private slots:
    void on_pushButton_clicked();

    void on_FindBTN_clicked();
    void closeEvent(QCloseEvent *event); // Handle the close event

signals:
    void closeButtonClicked(); // Signal indicating close button clicked
private:
    Ui::FindRoutes *ui;
    void drawRoutes();
};

#endif // ROUTESOPTIONSGUI_H
