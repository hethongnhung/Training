#ifndef MYCACULATOR_H
#define MYCACULATOR_H
#include <QObject>

class MyCaculator : public QObject
{
    Q_OBJECT
public:
    explicit MyCaculator(QObject *parent = 0);

signals:
    void sgCong(int result);
    void sgTru(int result);
    void sgNhan(int result);
    void sgChia(int result);
public slots:

public :
    void cong(int x,int y);
    void tru(int x, int y);
    void nhan(int x, int y);
    void chia(int x, int y);
};

#endif // MYCACULATOR_H
