#include "dwgrect.h"
#include <QRectF>
#include <QMessageBox>

DwgRect::DwgRect(QObject *parent)
    : DwgObject{parent}
{}
void DwgRect::SetData(QPoint pt1, QPoint pt2)
{
    lupt = pt1, rdpt = pt2;
    qreal left = qMin(pt1.x(), pt2.x());
    qreal top = qMin(pt1.y(), pt2.y());
    qreal right = qMax(pt1.x(), pt2.x());
    qreal bottom = qMax(pt1.y(), pt2.y());

    // 创建一个 QRectF 对象表示矩形
    rect.setRect(left, top, right - left, bottom - top);
}
void DwgRect::Draw(QPainter *painter)
{
    painter->drawRect(rect);
}
