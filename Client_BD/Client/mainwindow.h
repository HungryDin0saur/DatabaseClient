#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QString>
#include <QtSql/QSqlDriver>
#include <QSqlDriver>
#include <QMessageBox>
#include <QTableView>
#include <QEventLoop>
#include <QCharRef>
#include <QChar>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;

    QSqlDatabase dbAtom;

    QString arg, arg2;

private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_outputInfoDB_clicked();
    void on_clearInputCommand_clicked();
    void on_sendReguest_clicked();
    void on_radInfUsr5();
    void on_radDeleteUsr1_clicked();
    void on_radDeleteGroup2_clicked();
    void on_radEnumStation4();
    void on_radDelUsrNoGpDm7_clicked();
    void on_radDeleteDomain3_clicked();
    void on_actionStation_triggered();
    void on_actionDomain_triggered();
    void on_radInfUsr5_clicked();
    void on_actionGr_triggered();
    void on_actionUsers_triggered();
    void on_actionStation2_triggered();
    void on_actionGr1_triggered();
    void on_actionGr2_triggered();
    void on_actionGrDo_triggered();
    void on_actionDoSt_triggered();
    void on_actionUsDo_triggered();
    void on_actionUsGr_triggered();
};

#endif // MAINWINDOW_H
