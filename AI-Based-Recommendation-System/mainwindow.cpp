#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string.h>
#include <iostream>
#include <QCheckBox>
#include <QList>
#include <QDebug>
#include <QSlider>
#include <QLabel>
#include <QStringList>

struct Movie
{
    QStringList genres;
    int lowTime;
    int highTime;
    int lowYear;
    int highYear;
    int score;
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->recommend, &QPushButton::clicked, this, &MainWindow::recommendPressed);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::recommendPressed() {
    Movie m;

    // Setting the requirements
    QList<QCheckBox*> options = ui->genre->findChildren<QCheckBox*>();
    for (QCheckBox* checkBox: options) {
        if (checkBox->isChecked()) {
            m.genres.append(checkBox->text());
        }
    }

    m.highTime = ui->highTime->text().toInt();
    m.lowTime = ui->lowTime->text().toInt();
    m.highYear = ui->highYear->text().toInt();
    m.lowYear = ui->highYear->text().toInt();


}
