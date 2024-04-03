#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QDebug>
#include "dwgline.h"
#include "dwgcircle.h"
#include "dwgrect.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget->setFixedHeight(80);     // 设置QTabWidget控件的高度

    ui->FileHLayout->setAlignment(Qt::AlignLeft); // 把File子页面中的布局设计左对齐
    ui->FileHLayout->setAlignment(Qt::AlignTop);  // 把File子页面中的布局设计上对齐
    ui->FileHLayout->setContentsMargins(0,0,0,0);  // 设置布局与子页面四边的间距为0
    ui->FileHLayout->setSpacing(0);                // 设置布局中各控件之间的间距为0

    //  下面的代码，把在UI中添加的QToolButton控件与QAction动作连接起来
    ui->NewTB->setDefaultAction(ui->actionNew);
    ui->OpenTB->setDefaultAction(ui->actionOpen);
    ui->SaveTB->setDefaultAction(ui->actionSave);
    ui->SaveAsTB->setDefaultAction(ui->actionSaveAs);
    ui->ExitTB->setDefaultAction(ui->actionExit);

    ui->FileTab->setLayout(ui->FileHLayout);		// 通过本语句让布局布满Tab子页面

    QHBoxLayout *drawHL1 = new QHBoxLayout;               // 我们先设计一个横排列的布局，用于排列绘图控件
    drawHL1->setAlignment(Qt::AlignLeft);					//  左对齐
    drawHL1->setAlignment(Qt::AlignTop);                       //  顶对齐
    drawHL1->setContentsMargins(0,0,0,0);				     //  四边距为0
    drawHL1->setSpacing(0);                                  //  内部控件间距为0

    // 下面这一段代码主要用于设计一个画线的按钮控件，并把它添加到布局中
    QToolButton *lineTB = new QToolButton;                     // 第一个控件，画点
    lineTB->setToolButtonStyle(Qt::ToolButtonIconOnly);        // 控件样式设计为只显示图标
    lineTB->setFixedSize(QSize(32,32));                         // 指定图标的大小为 32x32 像素
    lineTB->setText("Line");                                  // 同时也设置了控件的显示名称
    lineTB->setArrowType(Qt::NoArrow);                         // 设置为没有箭头显示
    const QIcon linetIcon = QIcon::fromTheme("Line", QIcon(":/icons/icons/Line.png")); // 资源文件中的线的图标
    lineTB->setIcon(linetIcon);                                // 把这个点的图标设置给QToolButton按钮
    connect(lineTB,&QToolButton::clicked,this,&MainWindow::on_lineTB_clicked);   // 建立点击该按钮的槽函数的链接
    drawHL1->addWidget(lineTB);                                // 把这个按钮添加到布局中

    // 下面是圆的菜单项添加，圆分中心半径、两点、三点画圆等方法，因此需要多图标重叠
    QToolButton *circleTB =new QToolButton;
    circleTB->setToolButtonStyle(Qt::ToolButtonIconOnly);        // 控件样式设计为只显示图标
    circleTB->setIconSize(QSize(32,32));                         // 指定图标的大小为 32x32 像素
    circleTB->setText("Circle");                                  // 同时也设置了控件的显示名称
    circleTB->setArrowType(Qt::NoArrow);                         // 设置为没有箭头显示
    circleTB->setPopupMode(QToolButton::MenuButtonPopup);
    const QIcon circleIcon = QIcon::fromTheme("Circle", QIcon(":/icons/icons/Circle.png"));   // 这是资源文件中的点的图标
    circleTB->setIcon(circleIcon);                                // 把这个点的图标设置给QToolButton按钮

    QMenu * circleMenu = new QMenu;               // 为以叠加图标，需要构建菜单再添加动作
    QAction * cirAct1 = new QAction(QIcon(":/icons/icons/Circle.png"),"圆心半径");
    QAction * cirAct2 = new QAction(QIcon(":/icons/icons/Circle.png"),"两点画圆");
    QAction * cirAct3 = new QAction(QIcon(":/icons/icons/Circle.png"),"三点画圆");
    circleMenu->addAction(cirAct1);
    circleMenu->addAction(cirAct2);
    circleMenu->addAction(cirAct3);
    circleTB->setMenu(circleMenu);              		// 把菜单添加到QToolButton
    connect(cirAct1,&QAction::triggered,this,&MainWindow::on_cirAct1_triggered);
    drawHL1->addWidget(circleTB);


    ui->DrawTab->setLayout(drawHL1);

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

void MainWindow::paintEvent(QPaintEvent *event)
{
    mpainter = new QPainter(this);
    foreach (auto i, mObjVec) {
        i->Draw(mpainter);
    }
    delete mpainter;
}

void MainWindow::on_actionNew_triggered()
{
    int ret = QMessageBox::warning(this, "Warning",
        "你的图形是否保存?",
        QMessageBox::Ok | QMessageBox::Cancel);
    if(ret == QMessageBox::Ok)
        mObjVec.clear();
}


void MainWindow::on_actionOpen_triggered()
{
    QString curPath = QDir::currentPath();   // 获得当前程序所在的目录
    QString aFileName = QFileDialog::getOpenFileName(this,"选择一个图形文件",curPath,"CAD文件(*.*)");
    if(!aFileName.isEmpty())
        qDebug()<<"把文件内容读入到mObjVec中";
}


void MainWindow::on_actionSave_triggered()
{
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getSaveFileName(this,"输入一个图形文件名称",curPath,"CAD文件(*.*)");
    if(!aFileName.isEmpty())
        qDebug()<<"把mObjVec中的对象写入到 : "<< aFileName;
}


void MainWindow::on_actionSaveAs_triggered()
{
    QString curPath = QDir::currentPath();
    QString aFileName = QFileDialog::getSaveFileName(this,"输入一个图形文件名称",curPath,"CAD文件(*.*)");
    if(!aFileName.isEmpty())
        qDebug()<<"把mObjVec中的对象写入到 : "<< aFileName;
}


void MainWindow::on_actionExit_triggered()
{
    this->close();
}

void MainWindow::on_lineTB_clicked()
{
    mCurDrawType = DLine;
}

void MainWindow::on_cirAct1_triggered()
{
    mCurDrawType = DCircle;
}

