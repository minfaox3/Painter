#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setPen(QPen(QBrush(Qt::red),1));
    painter.setBrush(QBrush(Qt::red));
    for(size_t i=0;i<points.size();i++){
        painter.drawEllipse(points[i],10,10);
    }
    painter.end();
    ui->label->setText(QString::number(points.size()));
}

void MainWindow::mouseMoveEvent(QMouseEvent *event){
    points.push_back(QPoint(event->x(),event->y()));
    update();
    event->accept();
}
