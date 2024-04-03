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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSaveAs;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *FileTab;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *FileHLayout;
    QToolButton *NewTB;
    QToolButton *OpenTB;
    QToolButton *SaveTB;
    QToolButton *SaveAsTB;
    QToolButton *ExitTB;
    QWidget *DrawTab;
    QWidget *ModifyTab;
    QWidget *ViewTab;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(688, 526);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/New file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionNew->setMenuRole(QAction::NoRole);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/Open file.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionOpen->setMenuRole(QAction::NoRole);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/Save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionSave->setMenuRole(QAction::NoRole);
        actionSaveAs = new QAction(MainWindow);
        actionSaveAs->setObjectName(QString::fromUtf8("actionSaveAs"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/Save as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveAs->setIcon(icon3);
        actionSaveAs->setMenuRole(QAction::NoRole);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/Exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionExit->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        FileTab = new QWidget();
        FileTab->setObjectName(QString::fromUtf8("FileTab"));
        horizontalLayoutWidget = new QWidget(FileTab);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 39, 651, 121));
        FileHLayout = new QHBoxLayout(horizontalLayoutWidget);
        FileHLayout->setObjectName(QString::fromUtf8("FileHLayout"));
        FileHLayout->setContentsMargins(0, 0, 0, 0);
        NewTB = new QToolButton(horizontalLayoutWidget);
        NewTB->setObjectName(QString::fromUtf8("NewTB"));
        NewTB->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        FileHLayout->addWidget(NewTB);

        OpenTB = new QToolButton(horizontalLayoutWidget);
        OpenTB->setObjectName(QString::fromUtf8("OpenTB"));
        OpenTB->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        FileHLayout->addWidget(OpenTB);

        SaveTB = new QToolButton(horizontalLayoutWidget);
        SaveTB->setObjectName(QString::fromUtf8("SaveTB"));
        SaveTB->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        FileHLayout->addWidget(SaveTB);

        SaveAsTB = new QToolButton(horizontalLayoutWidget);
        SaveAsTB->setObjectName(QString::fromUtf8("SaveAsTB"));
        SaveAsTB->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        FileHLayout->addWidget(SaveAsTB);

        ExitTB = new QToolButton(horizontalLayoutWidget);
        ExitTB->setObjectName(QString::fromUtf8("ExitTB"));
        ExitTB->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        FileHLayout->addWidget(ExitTB);

        tabWidget->addTab(FileTab, QString());
        DrawTab = new QWidget();
        DrawTab->setObjectName(QString::fromUtf8("DrawTab"));
        tabWidget->addTab(DrawTab, QString());
        ModifyTab = new QWidget();
        ModifyTab->setObjectName(QString::fromUtf8("ModifyTab"));
        tabWidget->addTab(ModifyTab, QString());
        ViewTab = new QWidget();
        ViewTab->setObjectName(QString::fromUtf8("ViewTab"));
        tabWidget->addTab(ViewTab, QString());

        verticalLayout->addWidget(tabWidget);

        verticalSpacer = new QSpacerItem(20, 221, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 688, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSaveAs->setText(QCoreApplication::translate("MainWindow", "SaveAs", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        NewTB->setText(QCoreApplication::translate("MainWindow", "File", nullptr));
        OpenTB->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        SaveTB->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        SaveAsTB->setText(QCoreApplication::translate("MainWindow", "Save As", nullptr));
        ExitTB->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(FileTab), QCoreApplication::translate("MainWindow", "File", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(DrawTab), QCoreApplication::translate("MainWindow", "Draw", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ModifyTab), QCoreApplication::translate("MainWindow", "Modify", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ViewTab), QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
