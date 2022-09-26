/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUsers;
    QAction *actionStation;
    QAction *actionStation2;
    QAction *actionGr1;
    QAction *actionGr2;
    QAction *actionDomain;
    QAction *actionGrDo;
    QAction *actionDoSt;
    QAction *actionUsDo;
    QAction *actionUsGr;
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *editHostName;
    QLabel *label_2;
    QLineEdit *editUserName;
    QPushButton *pushButton;
    QTextBrowser *infoDB;
    QLabel *label_3;
    QLineEdit *editDataBaseName;
    QLabel *label_4;
    QLineEdit *editPassword;
    QPushButton *pushButton_2;
    QPushButton *clearInputCommand;
    QPushButton *outputInfoDB;
    QPushButton *sendReguest;
    QRadioButton *radDeleteUsr1;
    QRadioButton *radDeleteGroup2;
    QRadioButton *radDeleteDomain3;
    QRadioButton *radEnumStation4;
    QRadioButton *radInfUsr5;
    QRadioButton *radDeleteGrNoDm6;
    QRadioButton *radDelUsrNoGpDm7;
    QLabel *label_5;
    QLineEdit *argData;
    QTableView *outPutResult;
    QLineEdit *argData2;
    QTableView *sumUser;
    QLabel *label_6;
    QLabel *label_7;
    QMenuBar *menuBar;
    QMenu *menu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(779, 672);
        actionUsers = new QAction(MainWindow);
        actionUsers->setObjectName(QString::fromUtf8("actionUsers"));
        actionStation = new QAction(MainWindow);
        actionStation->setObjectName(QString::fromUtf8("actionStation"));
        actionStation2 = new QAction(MainWindow);
        actionStation2->setObjectName(QString::fromUtf8("actionStation2"));
        actionGr1 = new QAction(MainWindow);
        actionGr1->setObjectName(QString::fromUtf8("actionGr1"));
        actionGr2 = new QAction(MainWindow);
        actionGr2->setObjectName(QString::fromUtf8("actionGr2"));
        actionDomain = new QAction(MainWindow);
        actionDomain->setObjectName(QString::fromUtf8("actionDomain"));
        actionGrDo = new QAction(MainWindow);
        actionGrDo->setObjectName(QString::fromUtf8("actionGrDo"));
        actionDoSt = new QAction(MainWindow);
        actionDoSt->setObjectName(QString::fromUtf8("actionDoSt"));
        actionUsDo = new QAction(MainWindow);
        actionUsDo->setObjectName(QString::fromUtf8("actionUsDo"));
        actionUsGr = new QAction(MainWindow);
        actionUsGr->setObjectName(QString::fromUtf8("actionUsGr"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 331, 21));
        editHostName = new QLineEdit(centralWidget);
        editHostName->setObjectName(QString::fromUtf8("editHostName"));
        editHostName->setEnabled(false);
        editHostName->setGeometry(QRect(10, 20, 321, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 321, 21));
        editUserName = new QLineEdit(centralWidget);
        editUserName->setObjectName(QString::fromUtf8("editUserName"));
        editUserName->setEnabled(true);
        editUserName->setGeometry(QRect(10, 70, 321, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 2, 111, 81));
        infoDB = new QTextBrowser(centralWidget);
        infoDB->setObjectName(QString::fromUtf8("infoDB"));
        infoDB->setGeometry(QRect(480, 10, 281, 81));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 100, 321, 21));
        editDataBaseName = new QLineEdit(centralWidget);
        editDataBaseName->setObjectName(QString::fromUtf8("editDataBaseName"));
        editDataBaseName->setEnabled(false);
        editDataBaseName->setGeometry(QRect(10, 120, 321, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 150, 321, 21));
        editPassword = new QLineEdit(centralWidget);
        editPassword->setObjectName(QString::fromUtf8("editPassword"));
        editPassword->setGeometry(QRect(10, 170, 321, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 100, 111, 61));
        clearInputCommand = new QPushButton(centralWidget);
        clearInputCommand->setObjectName(QString::fromUtf8("clearInputCommand"));
        clearInputCommand->setGeometry(QRect(690, 170, 75, 23));
        outputInfoDB = new QPushButton(centralWidget);
        outputInfoDB->setObjectName(QString::fromUtf8("outputInfoDB"));
        outputInfoDB->setGeometry(QRect(480, 100, 281, 23));
        sendReguest = new QPushButton(centralWidget);
        sendReguest->setObjectName(QString::fromUtf8("sendReguest"));
        sendReguest->setEnabled(false);
        sendReguest->setGeometry(QRect(640, 510, 121, 23));
        radDeleteUsr1 = new QRadioButton(centralWidget);
        radDeleteUsr1->setObjectName(QString::fromUtf8("radDeleteUsr1"));
        radDeleteUsr1->setEnabled(false);
        radDeleteUsr1->setGeometry(QRect(10, 480, 161, 17));
        radDeleteGroup2 = new QRadioButton(centralWidget);
        radDeleteGroup2->setObjectName(QString::fromUtf8("radDeleteGroup2"));
        radDeleteGroup2->setEnabled(false);
        radDeleteGroup2->setGeometry(QRect(10, 500, 141, 17));
        radDeleteDomain3 = new QRadioButton(centralWidget);
        radDeleteDomain3->setObjectName(QString::fromUtf8("radDeleteDomain3"));
        radDeleteDomain3->setEnabled(false);
        radDeleteDomain3->setGeometry(QRect(10, 520, 191, 17));
        radEnumStation4 = new QRadioButton(centralWidget);
        radEnumStation4->setObjectName(QString::fromUtf8("radEnumStation4"));
        radEnumStation4->setEnabled(false);
        radEnumStation4->setGeometry(QRect(10, 540, 191, 17));
        radInfUsr5 = new QRadioButton(centralWidget);
        radInfUsr5->setObjectName(QString::fromUtf8("radInfUsr5"));
        radInfUsr5->setEnabled(false);
        radInfUsr5->setGeometry(QRect(10, 560, 601, 17));
        radDeleteGrNoDm6 = new QRadioButton(centralWidget);
        radDeleteGrNoDm6->setObjectName(QString::fromUtf8("radDeleteGrNoDm6"));
        radDeleteGrNoDm6->setEnabled(false);
        radDeleteGrNoDm6->setGeometry(QRect(10, 580, 411, 17));
        radDelUsrNoGpDm7 = new QRadioButton(centralWidget);
        radDelUsrNoGpDm7->setObjectName(QString::fromUtf8("radDelUsrNoGpDm7"));
        radDelUsrNoGpDm7->setEnabled(false);
        radDelUsrNoGpDm7->setGeometry(QRect(10, 600, 581, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(330, 480, 121, 20));
        argData = new QLineEdit(centralWidget);
        argData->setObjectName(QString::fromUtf8("argData"));
        argData->setEnabled(false);
        argData->setGeometry(QRect(460, 480, 301, 20));
        outPutResult = new QTableView(centralWidget);
        outPutResult->setObjectName(QString::fromUtf8("outPutResult"));
        outPutResult->setGeometry(QRect(20, 220, 751, 251));
        argData2 = new QLineEdit(centralWidget);
        argData2->setObjectName(QString::fromUtf8("argData2"));
        argData2->setEnabled(false);
        argData2->setGeometry(QRect(460, 510, 141, 22));
        sumUser = new QTableView(centralWidget);
        sumUser->setObjectName(QString::fromUtf8("sumUser"));
        sumUser->setGeometry(QRect(560, 540, 201, 81));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(350, 540, 201, 20));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(240, 510, 211, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 779, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionUsers);
        menu->addAction(actionStation);
        menu->addAction(actionStation2);
        menu->addAction(actionGr1);
        menu->addAction(actionGr2);
        menu->addAction(actionDomain);
        menu->addAction(actionGrDo);
        menu->addAction(actionDoSt);
        menu->addAction(actionUsDo);
        menu->addAction(actionUsGr);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionUsers->setText(QCoreApplication::translate("MainWindow", "Users", nullptr));
        actionStation->setText(QCoreApplication::translate("MainWindow", "Station1", nullptr));
        actionStation2->setText(QCoreApplication::translate("MainWindow", "Station2", nullptr));
        actionGr1->setText(QCoreApplication::translate("MainWindow", "Gr1", nullptr));
        actionGr2->setText(QCoreApplication::translate("MainWindow", "Gr2", nullptr));
        actionDomain->setText(QCoreApplication::translate("MainWindow", "Domain", nullptr));
        actionGrDo->setText(QCoreApplication::translate("MainWindow", "GrDo", nullptr));
        actionDoSt->setText(QCoreApplication::translate("MainWindow", "DoSt", nullptr));
        actionUsDo->setText(QCoreApplication::translate("MainWindow", "UsDo", nullptr));
        actionUsGr->setText(QCoreApplication::translate("MainWindow", "UsGr", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\272\320\276\320\274\320\277\321\214\321\216\321\202\320\265\321\200\320\260, \320\272 \320\272\320\276\321\202\320\276\321\200\321\203\320\274\320\276 \320\266\320\265\320\273\320\260\320\265\321\202\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217:", nullptr));
        editHostName->setText(QCoreApplication::translate("MainWindow", "DESKTOP-P3MQMQK\\MSSQLSERVER01", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", nullptr));
        editUserName->setText(QCoreApplication::translate("MainWindow", "HIkers01", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "CONNECT!!!!!!", nullptr));
        infoDB->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Info:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205:", nullptr));
        editDataBaseName->setText(QCoreApplication::translate("MainWindow", "winNT", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        editPassword->setText(QCoreApplication::translate("MainWindow", "deus2508", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        clearInputCommand->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        outputInfoDB->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \320\261\320\260\320\267\320\265 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        sendReguest->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \320\267\320\260\320\277\321\200\320\276\321\201", nullptr));
        radDeleteUsr1->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        radDeleteGroup2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\263\321\200\321\203\320\277\320\277\321\203", nullptr));
        radDeleteDomain3->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\264\320\276\320\274\320\265\320\275", nullptr));
        radEnumStation4->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \321\201\321\202\320\260\320\275\321\206\320\270\320\270 \320\264\320\260\320\275\320\275\320\276\320\263\320\276 \320\264\320\276\320\274\320\265\320\275\320\260", nullptr));
        radInfUsr5->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217\321\205 \320\262 \320\263\321\200\321\203\320\277\320\277\320\265", nullptr));
        radDeleteGrNoDm6->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\321\201\320\265 \320\263\321\200\321\203\320\277\320\277\321\213, \320\275\320\265 \320\262\321\205\320\276\320\264\321\217\321\211\320\270\320\265 \320\275\320\270 \320\262 \320\276\320\264\320\270\320\275 \320\270\320\267 \320\264\320\276\320\274\320\265\320\275\320\276\320\262", nullptr));
        radDelUsrNoGpDm7->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271, \320\275\320\265 \320\262\321\205\320\276\320\264\321\217\321\211\320\270\321\205 \320\275\320\270 \320\262 \320\276\320\264\320\275\321\203 \320\263\321\200\321\203\320\277\320\277\321\203 \320\270 \320\275\320\270 \320\262 \320\276\320\264\320\270\320\275 \320\264\320\276\320\274\320\265\320\275", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\262\321\205\320\276\320\264\320\275\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272 \320\262 \320\262\321\213\320\261\320\276\321\200\320\272\320\265 \320\267\320\260\320\277\321\200\320\276\321\201\320\260:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\321\213\321\205 \320\262\321\205\320\276\320\264\320\275\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205:", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216 \321\202\320\260\320\261\320\273\320\270\321\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
