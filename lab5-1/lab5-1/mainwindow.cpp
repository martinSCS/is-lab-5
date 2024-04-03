#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QPainter>
#include "dwgline.h"
#include "dwgcircle.h"
#include "dwgrect.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool isFirst = true;
QPoint temppt;

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(mCurDrawType == DLine)
    {
        if(isFirst)
        {
            temppt = event->pos();
            isFirst = false;
        }
        else
        {
            DwgLine *line = new DwgLine;            // 创建并初始化一个直线对象
            line-> SetData (temppt,event->pos());		// 使用SetData函数设置私有成员变量
            mObjVec.append(line);				// append函数用于把对象添加到数组mLines中
            update();						// 该函数用于刷新窗口
            isFirst = true;
        }
    }
    if(mCurDrawType == DCircle)
    {
        if(isFirst)
        {
            temppt = event->pos();
            isFirst = false;
        }
        else
        {
            DwgCircle *circle = new DwgCircle;            // 创建并初始化一个直线对象
            circle->SetData(temppt,event->pos());		// 使用SetData函数设置私有成员变量
            mObjVec.append(circle);                     // append函数用于把对象添加到数组mLines中
            update();                                   // 该函数用于刷新窗口
            isFirst = true;
        }
    }
    if(mCurDrawType == DRectangle)
    {
        if(isFirst)
        {
            temppt = event->pos();
            isFirst = false;
        }
        else
        {
            DwgRect *rect = new DwgRect;            // 创建并初始化一个直线对象
            rect->SetData(temppt,event->pos());		// 使用SetData函数设置私有成员变量
            mObjVec.append(rect);                     // append函数用于把对象添加到数组mLines中
            update();                                   // 该函数用于刷新窗口
            isFirst = true;
        }
    }

}


void MainWindow::on_actionOpen_triggered()
{
    QMessageBox::information(this,"Open Menu Clicked!","OK");
}



void MainWindow::on_actionExit_triggered()
{
    qDeleteAll(mObjVec);     // 删除所有的图元对象
    mObjVec.clear();		 //  清空m_mainlist
    this->close();

}



void MainWindow::paintEvent(QPaintEvent *event)
{
    mpainter = new QPainter(this);
    foreach (auto i, mObjVec) {
        i->Draw(mpainter);
    }
    delete mpainter;
}

void MainWindow::on_actionLine_triggered()
{
    mCurDrawType=DLine;
}


void MainWindow::on_actionCircle_triggered()
{
    mCurDrawType=DCircle;
}


void MainWindow::on_actionRectangle_triggered()
{
    mCurDrawType=DRectangle;
}


void MainWindow::on_actionPoint_triggered()
{
    mCurDrawType=DPoint;
}


void MainWindow::on_actionPolyline_triggered()
{
    mCurDrawType=DPolyLine;
}


void MainWindow::on_actionSPLine_triggered()
{
    mCurDrawType=DSPLine;
}


void MainWindow::on_actionNew_triggered()
{
    qDeleteAll(mObjVec);     // 删除所有的图元对象
    mObjVec.clear();		 //  清空m_mainlist
    update();
    mCurDrawType=DNone;
    ui->statusbar->showMessage("开始绘制一张新的图纸：",3000);

}

