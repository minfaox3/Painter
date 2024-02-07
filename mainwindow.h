#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QPoint>
#include <vector>
#include <QPen>
#include <QPainter>
#include <QBrush>
#include <QMainWindow>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

private:
    Ui::MainWindow *ui;
    std::vector<QPoint>points;
};
#endif // MAINWINDOW_H
