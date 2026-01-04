#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <string.h>
#include <iostream>
#include <QCheckBox>
#include <QList>
#include <QDebug>

struct Movie
{
    std::string genre;
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
    QList<QCheckBox*> options = ui->genre->findChildren<QCheckBox*>();
    for (QCheckBox* checkBox: options) {
        if (checkBox->isChecked()) {
            qDebug() << checkBox->text();
        }
    }
}
