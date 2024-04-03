/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QAction *actionPoint;
    QAction *actionLine;
    QAction *actionCircle;
    QAction *actionRectangle;
    QAction *actionSave_As;
    QAction *actionPolyline;
    QAction *actionSPLine;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/icons/New file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/icons/Open file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/icons/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/icons/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon3);
        actionPoint = new QAction(MainWindow);
        actionPoint->setObjectName(QString::fromUtf8("actionPoint"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/icons/Target1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPoint->setIcon(icon4);
        actionLine = new QAction(MainWindow);
        actionLine->setObjectName(QString::fromUtf8("actionLine"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/icons/Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon5);
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName(QString::fromUtf8("actionCircle"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icon/icons/Circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCircle->setIcon(icon6);
        actionRectangle = new QAction(MainWindow);
        actionRectangle->setObjectName(QString::fromUtf8("actionRectangle"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icon/icons/Restangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectangle->setIcon(icon7);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icon/icons/Save as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon8);
        actionPolyline = new QAction(MainWindow);
        actionPolyline->setObjectName(QString::fromUtf8("actionPolyline"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icon/icons/Angle.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPolyline->setIcon(icon9);
        actionSPLine = new QAction(MainWindow);
        actionSPLine->setObjectName(QString::fromUtf8("actionSPLine"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icon/icons/Curve.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSPLine->setIcon(icon10);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionPoint);
        menuEdit->addAction(actionLine);
        menuEdit->addAction(actionCircle);
        menuEdit->addAction(actionRectangle);
        menuEdit->addAction(actionPolyline);
        menuEdit->addAction(actionSPLine);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionSave_As);
        toolBar->addAction(actionExit);
        toolBar_2->addAction(actionPoint);
        toolBar_2->addAction(actionLine);
        toolBar_2->addAction(actionCircle);
        toolBar_2->addAction(actionRectangle);
        toolBar_2->addAction(actionPolyline);
        toolBar_2->addAction(actionSPLine);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionPoint->setText(QCoreApplication::translate("MainWindow", "Point", nullptr));
        actionLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        actionCircle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        actionRectangle->setText(QCoreApplication::translate("MainWindow", "Rectangle", nullptr));
        actionSave_As->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionPolyline->setText(QCoreApplication::translate("MainWindow", "Polyline", nullptr));
        actionSPLine->setText(QCoreApplication::translate("MainWindow", "SPLine", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
