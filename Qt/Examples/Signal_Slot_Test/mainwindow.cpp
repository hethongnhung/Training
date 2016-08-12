#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //solution 1
    connect(ui->slider,SIGNAL(valueChanged(int)),ui->spinBox,SLOT(setValue(int)));
    //solution 2 : using pointer of object
    connect(ui->slider2,&QSlider::valueChanged,ui->spinBox_2,&QSpinBox::setValue);
    //solution 3 : connect to customize slots
    //connect(ui->sld3,&QSlider::valueChanged,this,&test_solution3);
    connect(ui->sld3,SIGNAL(valueChanged(int)),this,SLOT(test_solution3(int)));
    //connect(mycalc,&MyCaculator::sgCong,this,&test_solution3);
    mycalc = new MyCaculator;
    connect(mycalc,&MyCaculator::sgCong,this,&test_solution3);

    mycalc->cong(5,6);
    mycalc->tru(15,6);
    mycalc->nhan(5,6);
    mycalc->chia(30,5);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::test_solution3(int x)
{
    qDebug() << "Result Cong : " << x ;
}
