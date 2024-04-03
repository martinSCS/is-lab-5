#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dwgobject.h"
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

enum DrawType
{
    DNone,
    DLine,
    DCircle,
    DRectangle,
    DPoint,
    DPolyLine,
    DSPLine
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    DrawType mCurDrawType = DNone;
    QVector<DwgObject *> mObjVec ;
    QPainter * mpainter = nullptr;

private slots:
    void on_actionNew_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_triggered();

    void on_actionSaveAs_triggered();

    void on_actionExit_triggered();
    void on_lineTB_clicked();
    void on_cirAct1_triggered();

private:
    Ui::MainWindow *ui;

protected:
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void paintEvent(QPaintEvent *event);
};




#endif // MAINWINDOW_H
