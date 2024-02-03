/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *forward_button;
    QPushButton *back_button;
    QPushButton *minus_button;
    QGridLayout *gridLayout;
    QPushButton *b_6;
    QPushButton *b_1;
    QPushButton *b_5;
    QPushButton *b_3;
    QPushButton *b_4;
    QPushButton *b_2;
    QPushButton *pushButton_9;
    QPushButton *b_7;
    QPushButton *b_8;
    QPushButton *b_0;
    QGridLayout *gridLayout_3;
    QLineEdit *volume;
    QLineEdit *channel;
    QLabel *label;
    QLabel *label_2;
    QPushButton *plus_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(240, 680);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 221, 621));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        forward_button = new QPushButton(gridLayoutWidget_2);
        forward_button->setObjectName(QString::fromUtf8("forward_button"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(forward_button->sizePolicy().hasHeightForWidth());
        forward_button->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        forward_button->setFont(font);

        gridLayout_2->addWidget(forward_button, 1, 3, 1, 1);

        back_button = new QPushButton(gridLayoutWidget_2);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        sizePolicy1.setHeightForWidth(back_button->sizePolicy().hasHeightForWidth());
        back_button->setSizePolicy(sizePolicy1);
        back_button->setFont(font);

        gridLayout_2->addWidget(back_button, 2, 3, 1, 1);

        minus_button = new QPushButton(gridLayoutWidget_2);
        minus_button->setObjectName(QString::fromUtf8("minus_button"));
        sizePolicy1.setHeightForWidth(minus_button->sizePolicy().hasHeightForWidth());
        minus_button->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(20);
        minus_button->setFont(font1);

        gridLayout_2->addWidget(minus_button, 2, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        b_6 = new QPushButton(gridLayoutWidget_2);
        b_6->setObjectName(QString::fromUtf8("b_6"));
        sizePolicy1.setHeightForWidth(b_6->sizePolicy().hasHeightForWidth());
        b_6->setSizePolicy(sizePolicy1);
        b_6->setFont(font);

        gridLayout->addWidget(b_6, 1, 2, 1, 1);

        b_1 = new QPushButton(gridLayoutWidget_2);
        b_1->setObjectName(QString::fromUtf8("b_1"));
        sizePolicy1.setHeightForWidth(b_1->sizePolicy().hasHeightForWidth());
        b_1->setSizePolicy(sizePolicy1);
        b_1->setFont(font);

        gridLayout->addWidget(b_1, 0, 0, 1, 1);

        b_5 = new QPushButton(gridLayoutWidget_2);
        b_5->setObjectName(QString::fromUtf8("b_5"));
        sizePolicy1.setHeightForWidth(b_5->sizePolicy().hasHeightForWidth());
        b_5->setSizePolicy(sizePolicy1);
        b_5->setFont(font);

        gridLayout->addWidget(b_5, 1, 1, 1, 1);

        b_3 = new QPushButton(gridLayoutWidget_2);
        b_3->setObjectName(QString::fromUtf8("b_3"));
        sizePolicy1.setHeightForWidth(b_3->sizePolicy().hasHeightForWidth());
        b_3->setSizePolicy(sizePolicy1);
        b_3->setFont(font);

        gridLayout->addWidget(b_3, 0, 2, 1, 1);

        b_4 = new QPushButton(gridLayoutWidget_2);
        b_4->setObjectName(QString::fromUtf8("b_4"));
        sizePolicy1.setHeightForWidth(b_4->sizePolicy().hasHeightForWidth());
        b_4->setSizePolicy(sizePolicy1);
        b_4->setFont(font);

        gridLayout->addWidget(b_4, 1, 0, 1, 1);

        b_2 = new QPushButton(gridLayoutWidget_2);
        b_2->setObjectName(QString::fromUtf8("b_2"));
        sizePolicy1.setHeightForWidth(b_2->sizePolicy().hasHeightForWidth());
        b_2->setSizePolicy(sizePolicy1);
        b_2->setFont(font);

        gridLayout->addWidget(b_2, 0, 1, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_2);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy1.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy1);
        pushButton_9->setFont(font);

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        b_7 = new QPushButton(gridLayoutWidget_2);
        b_7->setObjectName(QString::fromUtf8("b_7"));
        sizePolicy1.setHeightForWidth(b_7->sizePolicy().hasHeightForWidth());
        b_7->setSizePolicy(sizePolicy1);
        b_7->setFont(font);

        gridLayout->addWidget(b_7, 2, 0, 1, 1);

        b_8 = new QPushButton(gridLayoutWidget_2);
        b_8->setObjectName(QString::fromUtf8("b_8"));
        sizePolicy1.setHeightForWidth(b_8->sizePolicy().hasHeightForWidth());
        b_8->setSizePolicy(sizePolicy1);
        b_8->setFont(font);

        gridLayout->addWidget(b_8, 2, 1, 1, 1);

        b_0 = new QPushButton(gridLayoutWidget_2);
        b_0->setObjectName(QString::fromUtf8("b_0"));
        sizePolicy1.setHeightForWidth(b_0->sizePolicy().hasHeightForWidth());
        b_0->setSizePolicy(sizePolicy1);
        b_0->setFont(font);

        gridLayout->addWidget(b_0, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 4, 2, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        volume = new QLineEdit(gridLayoutWidget_2);
        volume->setObjectName(QString::fromUtf8("volume"));

        gridLayout_3->addWidget(volume, 1, 1, 1, 1);

        channel = new QLineEdit(gridLayoutWidget_2);
        channel->setObjectName(QString::fromUtf8("channel"));

        gridLayout_3->addWidget(channel, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(10);
        label->setFont(font2);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 0, 2, 1, 2);

        plus_button = new QPushButton(gridLayoutWidget_2);
        plus_button->setObjectName(QString::fromUtf8("plus_button"));
        sizePolicy1.setHeightForWidth(plus_button->sizePolicy().hasHeightForWidth());
        plus_button->setSizePolicy(sizePolicy1);
        plus_button->setFont(font1);

        gridLayout_2->addWidget(plus_button, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 240, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        forward_button->setText(QApplication::translate("MainWindow", "Forward", nullptr));
        back_button->setText(QApplication::translate("MainWindow", "Back", nullptr));
        minus_button->setText(QApplication::translate("MainWindow", "-", nullptr));
        b_6->setText(QApplication::translate("MainWindow", "6", nullptr));
        b_1->setText(QApplication::translate("MainWindow", "1", nullptr));
        b_5->setText(QApplication::translate("MainWindow", "5", nullptr));
        b_3->setText(QApplication::translate("MainWindow", "3", nullptr));
        b_4->setText(QApplication::translate("MainWindow", "4", nullptr));
        b_2->setText(QApplication::translate("MainWindow", "2", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "9", nullptr));
        b_7->setText(QApplication::translate("MainWindow", "7", nullptr));
        b_8->setText(QApplication::translate("MainWindow", "8", nullptr));
        b_0->setText(QApplication::translate("MainWindow", "0", nullptr));
        label->setText(QApplication::translate("MainWindow", "Channel", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Volume", nullptr));
        plus_button->setText(QApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
