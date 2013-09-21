#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QModelIndex>
#include <QStringList>
#include "account.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Account *allAccount;
    
private slots:
    void add2List();
    void on_le_accountName_returnPressed();

    void on_lineEditDescription_returnPressed();
    void on_lineEditPrice_returnPressed();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
