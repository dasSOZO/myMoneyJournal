#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Database.h"

#include <QMainWindow>
#include <QModelIndex>
#include <QStringList>
#include <QRadioButton>
#include <QButtonGroup>
#include <QDataWidgetMapper>
#include <QtSql>
#include <QLabel>
#include <iostream>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    void updateUsers(bool addUserFlag);
    ~MainWindow();
    
private slots:
    void add2List();
    void on_lineEdit_accountName_returnPressed();
    void on_lineEditDescription_returnPressed();
    void on_lineEditPrice_returnPressed();
    void userChanged(int id);

private:
    Ui::MainWindow *ui;
    QButtonGroup *btnGroup_user;
    Database *database;

    QSqlRelationalTableModel *model;
    QSqlQueryModel *userModel;
    QList<QRadioButton*> listUserBtn;
    QList<QLabel*> listUserLbl;

};

#endif // MAINWINDOW_H
