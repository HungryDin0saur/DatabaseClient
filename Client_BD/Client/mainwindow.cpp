#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMainWindow::connect(ui->clearInputCommand, SIGNAL(close()), SLOT(on_showDB82()));
    QMainWindow::connect(ui->clearInputCommand, SIGNAL(close()), SLOT(on_showDB82()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    dbAtom = QSqlDatabase::addDatabase("QODBC");

    //dbAtom.setDatabaseName("DRIVER={SQL server};SERVER="+ui->editHostName->text()+"DATABASE="+ui->editDataBaseName->text()+";");
    dbAtom.setDatabaseName("DRIVER={SQL server};SERVER=DESKTOP-P3MQMQK\\MSSQLSERVER01;DATABASE=winNT;");
    dbAtom.setUserName(ui->editUserName->text());
    dbAtom.setPassword(ui->editPassword->text());
    dbAtom.setPort(1433);

    if (!dbAtom.open())
    {
        qDebug() << "Cannot open database:" << dbAtom.lastError();
        QMessageBox::information(this, "Ошибка", "Соединение не установлено");
      return;
    }
    QMessageBox::information(this, "", "Соединение установлено");

    ui->argData->setEnabled(true);
    ui->sendReguest->setEnabled(true);
    ui->radDeleteUsr1->setEnabled(true);
    ui->radDeleteGroup2->setEnabled(true);
    ui->radDeleteDomain3->setEnabled(true);
    ui->radEnumStation4->setEnabled(true);
    ui->radInfUsr5->setEnabled(true);
    ui->radDeleteGrNoDm6->setEnabled(true);
    ui->radDelUsrNoGpDm7->setEnabled(true);

    ui->pushButton->setEnabled(false);

   return;
}

void MainWindow::on_pushButton_2_clicked()
{
    dbAtom.close();
    QMessageBox::information(this, "", "Соединение закрыто");

    ui->argData->setEnabled(false);
    ui->sendReguest->setEnabled(false);
    ui->radDeleteUsr1->setEnabled(false);
    ui->radDeleteGroup2->setEnabled(false);
    ui->radDeleteDomain3->setEnabled(false);
    ui->radEnumStation4->setEnabled(false);
    ui->radInfUsr5->setEnabled(false);
    ui->radDeleteGrNoDm6->setEnabled(false);
    ui->radDelUsrNoGpDm7->setEnabled(false);
    ui->argData2->setEnabled(false);
    ui->infoDB->clear();

    ui->pushButton->setEnabled(true);
}

void MainWindow::on_outputInfoDB_clicked()
{
    QStringList lst = dbAtom.tables();
    foreach (QString out, lst) {
       ui->infoDB->append(out);
    }
}


void MainWindow::on_clearInputCommand_clicked()
{

}

void MainWindow::on_sendReguest_clicked()
{
    int select = 0;

    QSqlQuery query;

    if(ui->radDeleteUsr1->isChecked())
    {
        select = 1;
        arg = ui->argData->text();
        goto SW;
    }
    if(ui->radDeleteGroup2->isChecked())
    {
        select = 2;
        arg = ui->argData->text();
        goto SW;
    }
    if(ui->radDeleteDomain3->isChecked())
    {
        select = 3;
        arg = ui->argData->text();
        goto SW;
    }
    if(ui->radEnumStation4->isChecked())
    {
        select = 4;
        arg = ui->argData->text();
        goto SW;
    }
    if(ui->radInfUsr5->isChecked())
    {
        select = 5;
        arg = ui->argData->text();
        goto SW;
    }
    if(ui->radDeleteGrNoDm6->isChecked())
    {
        select = 6;
        arg = ui->argData->text();
        goto SW;
    }
    if(ui->radDelUsrNoGpDm7->isChecked())
    {
        select = 7;
        arg = ui->argData->text();
        goto SW;
    }

 SW:

    switch(select)
    {
       case 1:
        if (!query.exec("DELETE FROM Users WHERE ИмяПользователя = '" + arg + "' "))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        if (!query.exec("DELETE FROM UsDo WHERE ИмяПользователя = '" + arg + "' "))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        QMessageBox::information(this, "", "Пользователь " + arg + " успешно удален!");
        break;

       case 2:
        if (!query.exec("DELETE FROM Gr1 WHERE ИмяГруппы = '" + arg + "'"))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        if (!query.exec("DELETE FROM Gr2 WHERE ИмяГруппы = '" + arg + "'"))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        if (!query.exec("DELETE FROM GrDo WHERE ИмяГруппы = '" + arg + "'"))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        if (!query.exec("DELETE FROM UsGr WHERE ИмяГруппы = '" + arg + "'"))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        QMessageBox::information(this, "", arg + " успешно удалена!");
        break;

       case 3:
        if (!query.exec("DELETE FROM Domain WHERE ИдДомена = '" +arg+ "' "))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        if (!query.exec("DELETE FROM  GrDo WHERE ИдДомена = '" +arg+ "' "))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        if (!query.exec("DELETE FROM  DoSt WHERE ИдДомена = '" +arg+ "' "))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        if (!query.exec("DELETE FROM  UsDo WHERE ИдДомена = '" +arg+ "' "))
        {
          QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
          return;
        }
        QMessageBox::information(this, "", "Домен " + arg + " успешно удален!");
        break;

       case 4:
            MainWindow::on_radEnumStation4();
        break;

       case 5:
            MainWindow::on_radInfUsr5();
        break;

       case 6:
        if (!query.exec("DELETE FROM Gr1 WHERE ИмяГруппы IN "
                        "(SELECT ИмяГруппы FROM Gr1 EXCEPT SELECT ИмяГруппы FROM GrDo)"))
        {
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        ui->argData2->setEnabled(false);
        return;
        }
        if (!query.exec("DELETE FROM Gr2 WHERE ИмяГруппы IN "
                        "(SELECT ИмяГруппы FROM Gr2 EXCEPT SELECT ИмяГруппы FROM GrDo)"))
        {
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        ui->argData2->setEnabled(false);
        return;
        }
        if (!query.exec("DELETE FROM UsGr WHERE ИмяГруппы IN "
                        "(SELECT ИмяГруппы FROM UsGr EXCEPT SELECT ИмяГруппы FROM GrDo)"))
        {
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        ui->argData2->setEnabled(false);
        return;
        }
        QMessageBox::information(this, "", "Заднные группы успешно удалены!");
        break;

       case 7:
            if (!query.exec("DELETE FROM Users WHERE ИмяПользователя IN "
                            "(SELECT ИмяПользователя FROM Users "
                            "EXCEPT "
                            "SELECT ИмяПользователя FROM UsDo, GrDo WHERE UsDo.ИдДомена = GrDo.ИдДомена)"))
            {
            QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
            ui->argData2->setEnabled(false);
            return;
            }
            if (!query.exec("DELETE FROM Users WHERE ИмяПользователя IN "
                            "(SELECT ИмяПользователя FROM Users "
                            "EXCEPT "
                            "SELECT ИмяПользователя FROM UsGr)"))
            {
            QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
            ui->argData2->setEnabled(false);
            return;
            }
            QMessageBox::information(this, "", "Заднные пользователи успешно удалены!");
        break;

       default:
              QMessageBox::information(this, "Ошибка", "Не выбрана требуемая операция");
          return;
    }

  return;
}

void MainWindow::on_radInfUsr5_clicked()
{
    ui->argData2->setEnabled(true);
}

void MainWindow::on_radDelUsrNoGpDm7_clicked()
{
    ui->argData2->setEnabled(false);
}

void MainWindow::on_radEnumStation4()
{
    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("SELECT DISTINCT Station2.ИмяСтанции, Station2.ТипСтанции "
                   "FROM Domain, DoSt, Station1, Station2 "
                   "WHERE Domain.ИмяДомена = '" + arg + "' AND Domain.ИдДомена = DoSt.ИдДомена AND DoSt.ИдСтанции = Station1.ИдСтанции AND Station1.ИмяСтанции = Station2.ИмяСтанции ORDER BY ТипСтанции");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }
    QMessageBox::information(this, "", "Запрос успешно выполнен!");

    loop.exec();
}

void MainWindow::on_radInfUsr5()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model, model2;

    model.setQuery("select Users.ИмяПользователя, Users.ИдПользователя, UsGr.ИмяГруппы, UsDo.ИдДомена, Station1.ИмяСтанции from UsGr, Users, UsDo, DoSt, Station1 "
                   "where Users.ИмяПользователя = UsGr.ИмяПользователя "
                   "and UsDo.ИмяПользователя = UsGr.ИмяПользователя "
                   "and DoSt.ИдДомена = UsDo.ИдДомена and DoSt.ИдСтанции = Station1.ИдСтанции and UsGr.ИмяГруппы = '" + arg + "'");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    model2.setQuery("SELECT COUNT(*) Всего "
                    "from UsGr, Users where Users.ИмяПользователя = UsGr.ИмяПользователя and UsGr.ИмяГруппы = '" + arg + "'");
    ui->sumUser->setModel(&model2);
    ui->sumUser->show();
    if (model2.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}


void MainWindow::on_actionUsers_triggered()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("select ИмяПользователя, ИдПользователя from Users");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}

void MainWindow::on_actionStation_triggered()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("select ИмяСтанции, ИдСтанции from Station1");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}

void MainWindow::on_actionStation2_triggered()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("select ИмяСтанции, ТипСтанции from Station2");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}

void MainWindow::on_actionGr1_triggered()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("select ИмяГруппы, ИдГруппы from Gr1");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}

void MainWindow::on_actionGr2_triggered()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("select ИмяГруппы, Коментарии from Gr2");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}

void MainWindow::on_actionDomain_triggered()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("select ИмяДомена, ИдДомена from Domain");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}

void MainWindow::on_actionGrDo_triggered()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("select ИмяГруппы, ИдДомена from GrDo");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}

void MainWindow::on_actionDoSt_triggered()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("select ИдДомена, ИдСтанции from DoSt");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}

void MainWindow::on_actionUsDo_triggered()
{
    ui->argData2->setEnabled(false);

    QEventLoop loop;

    QSqlQueryModel model;

    model.setQuery("select ИмяПользователя, ИдДомена from UsDo");
    ui->outPutResult->setModel(&model);
    ui->outPutResult->show();
    if (model.lastError().isValid())
    {
        qDebug() << model.lastError();
        QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
        return;
    }

    QMessageBox::information(this, "", "Запрос успешно выполнен");

    loop.exec();
}

void MainWindow::on_actionUsGr_triggered()
{
          ui->argData2->setEnabled(false);

          QEventLoop loop;

          QSqlQueryModel model;

          model.setQuery("select ИмяПользователя, ИмяГруппы FROM UsGr");
          ui->outPutResult->setModel(&model);
          ui->outPutResult->show();
          if (model.lastError().isValid())
          {
              qDebug() << model.lastError();
              QMessageBox::information(this, "Ошибка", "Ошибка выполнения запроса");
              return;
          }

          QMessageBox::information(this, "", "Запрос успешно выполнен");

          loop.exec();
}
