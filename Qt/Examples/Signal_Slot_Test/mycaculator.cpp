#include "mycaculator.h"
#include <QDebug>

MyCaculator::MyCaculator(QObject *parent) : QObject(parent)
{

}

void MyCaculator::cong(int x, int y)
{
    //qDebug() << "Cong = " << x+y;
    int temp;
    temp = x+y;
    emit sgCong(temp);
}

void MyCaculator::tru(int x, int y)
{
   // qDebug() << "Tru = " << x - y;
    emit sgTru(x-y);
}

void MyCaculator::nhan(int x, int y)
{
    //qDebug() << "Nhan = " << x*y;
    emit sgNhan(x*y);
}

void MyCaculator::chia(int x, int y)
{
    //qDebug() << "Chia = " << (x/y) ;
    emit sgChia(x/y);
}

