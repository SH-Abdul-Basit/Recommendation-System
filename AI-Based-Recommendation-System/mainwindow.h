#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>
#include <QLabel>
#include <QCheckBox>
#include <QList>
#include <QDebug>
#include <QSlider>
#include <QLabel>
#include <QStringList>
#include <QFile>
#include <QTextStream>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void recommendPressed();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
