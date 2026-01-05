/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *genre;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QPushButton *recommend;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *weightageSection;
    QHBoxLayout *genreSection;
    QLabel *label_5;
    QSlider *genreSlider;
    QLabel *genreWeight;
    QHBoxLayout *durationSection;
    QLabel *label_6;
    QSlider *durationSlider;
    QLabel *durationWeight;
    QHBoxLayout *yearSection;
    QLabel *label_7;
    QSlider *yearSlider;
    QLabel *yearWeight;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lowTime;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *highTime;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lowYear;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *highYear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(903, 476);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        genre = new QGroupBox(centralwidget);
        genre->setObjectName(QString::fromUtf8("genre"));
        genre->setGeometry(QRect(10, 10, 151, 221));
        verticalLayout = new QVBoxLayout(genre);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(genre);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(genre);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(false);

        verticalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(genre);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(genre);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(genre);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        recommend = new QPushButton(centralwidget);
        recommend->setObjectName(QString::fromUtf8("recommend"));
        recommend->setGeometry(QRect(10, 290, 151, 41));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(530, 20, 291, 211));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 20, 291, 191));
        weightageSection = new QVBoxLayout(layoutWidget);
        weightageSection->setObjectName(QString::fromUtf8("weightageSection"));
        weightageSection->setContentsMargins(0, 0, 0, 0);
        genreSection = new QHBoxLayout();
        genreSection->setObjectName(QString::fromUtf8("genreSection"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        genreSection->addWidget(label_5);

        genreSlider = new QSlider(layoutWidget);
        genreSlider->setObjectName(QString::fromUtf8("genreSlider"));
        genreSlider->setMinimum(1);
        genreSlider->setMaximum(5);
        genreSlider->setOrientation(Qt::Horizontal);

        genreSection->addWidget(genreSlider);

        genreWeight = new QLabel(layoutWidget);
        genreWeight->setObjectName(QString::fromUtf8("genreWeight"));

        genreSection->addWidget(genreWeight);


        weightageSection->addLayout(genreSection);

        durationSection = new QHBoxLayout();
        durationSection->setObjectName(QString::fromUtf8("durationSection"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        durationSection->addWidget(label_6);

        durationSlider = new QSlider(layoutWidget);
        durationSlider->setObjectName(QString::fromUtf8("durationSlider"));
        durationSlider->setMinimum(1);
        durationSlider->setMaximum(5);
        durationSlider->setOrientation(Qt::Horizontal);

        durationSection->addWidget(durationSlider);

        durationWeight = new QLabel(layoutWidget);
        durationWeight->setObjectName(QString::fromUtf8("durationWeight"));

        durationSection->addWidget(durationWeight);


        weightageSection->addLayout(durationSection);

        yearSection = new QHBoxLayout();
        yearSection->setObjectName(QString::fromUtf8("yearSection"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        yearSection->addWidget(label_7);

        yearSlider = new QSlider(layoutWidget);
        yearSlider->setObjectName(QString::fromUtf8("yearSlider"));
        yearSlider->setMinimum(1);
        yearSlider->setMaximum(5);
        yearSlider->setOrientation(Qt::Horizontal);

        yearSection->addWidget(yearSlider);

        yearWeight = new QLabel(layoutWidget);
        yearWeight->setObjectName(QString::fromUtf8("yearWeight"));

        yearSection->addWidget(yearWeight);


        weightageSection->addLayout(yearSection);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 290, 161, 41));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(190, 40, 315, 67));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lowTime = new QLineEdit(layoutWidget1);
        lowTime->setObjectName(QString::fromUtf8("lowTime"));

        horizontalLayout->addWidget(lowTime);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        highTime = new QLineEdit(layoutWidget1);
        highTime->setObjectName(QString::fromUtf8("highTime"));

        horizontalLayout_2->addWidget(highTime);


        verticalLayout_2->addLayout(horizontalLayout_2);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(190, 170, 269, 67));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lowYear = new QLineEdit(layoutWidget2);
        lowYear->setObjectName(QString::fromUtf8("lowYear"));

        horizontalLayout_3->addWidget(lowYear);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        highYear = new QLineEdit(layoutWidget2);
        highYear->setObjectName(QString::fromUtf8("highYear"));

        horizontalLayout_4->addWidget(highYear);


        verticalLayout_3->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 903, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(genreSlider, SIGNAL(valueChanged(int)), genreWeight, SLOT(setNum(int)));
        QObject::connect(durationSlider, SIGNAL(valueChanged(int)), durationWeight, SLOT(setNum(int)));
        QObject::connect(yearSlider, SIGNAL(valueChanged(int)), yearWeight, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        genre->setTitle(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Action", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Comedy", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Drama", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Horror", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "Scifi", nullptr));
        recommend->setText(QCoreApplication::translate("MainWindow", "Recommend", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Weightage", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        genreWeight->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Duration", nullptr));
        durationWeight->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Year", nullptr));
        yearWeight->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Shortest Duration: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Longest Duration:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Earliest Year:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Latest Year:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
