#include "mainwindow.h"
#include "./ui_mainwindow.h"

struct Movie
{
    QStringList genres;
    int lowTime;
    int highTime;
    int lowYear;
    int highYear;
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

    // Getting the weights
    int gs = ui->genreSlider->value();
    int ds = ui->durationSlider->value();
    int ys = ui->yearSlider->value();

    // Calculation the total value
    float total = gs + ds + ys;

    // Calculation the weightage
    float gw = gs / total;
    float dw = ds / total;
    float yw = ys / total;

    // Go through the dataset and find the best fit
    QString path = QDir::currentPath() + "/movies.csv";
    qDebug() << path;
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    QTextStream in(&file);

    // Read and discard the first line
    // Because the first line is the header
    if (!in.atEnd()) {
        in.readLine();
    }

    // Reading each movie record and scoring them
    float maxScore = 0;
    QStringList recommended;

    while (!in.atEnd()) {
        QString record = in.readLine();
        QStringList fields = record.split(',');
        if (fields.length() > 1) {
            QString genre = fields[0];
            int duration = fields[2].toInt();
            int year = fields[3].toInt();

            bool genreVal = m.genres.contains(genre);
            bool durationVal = duration <= m.highTime && duration >= m.lowTime;
            bool yearVal = year <= m.highYear && year >= m.lowYear;

            // Weighted sum to calculate the score of each movie
            float score =  genreVal * gw + durationVal * dw + yearVal * yw;

            // Finding the best recommendation according to that score
            if (score > maxScore) {
                maxScore = score;
                recommended = fields;
            }
        }
    }

    // Displaying the recommendation

}
