#ifndef DWGRECT_H
#define DWGRECT_H

#include "dwgobject.h"
#include <QRectF>

class DwgRect : public DwgObject
{
    Q_OBJECT
public:
    explicit DwgRect(QObject *parent = nullptr);
private:
    QPointF lupt, rdpt;
    QRectF rect;
public:
    virtual void Draw(QPainter *painter);
    virtual void SetData(QPoint pt1, QPoint pt2);
};

#endif // DWGRECT_H
