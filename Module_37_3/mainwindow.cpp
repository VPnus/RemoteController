#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi();

    currentChannel = 0;
    volumeLevel = 50;

    updateDisplay();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setupUi()
{
    this->setFixedSize(240, 680);

    for (int i = 0; i < 10; i++) {
        channelButtons[i] = new QPushButton(QString::number(i), this);
        channelButtons[i]->setGeometry(20, 40 + 60 * i, 80, 50);
        connect(channelButtons[i], &QPushButton::clicked, this, &MainWindow::switchChannel);
    }

    nextButton = new QPushButton("Next", this);
    nextButton->setGeometry(130, 40, 80, 50);
    connect(nextButton, &QPushButton::clicked, this, &MainWindow::nextChannel);

    previousButton = new QPushButton("Previous", this);
    previousButton->setGeometry(130, 110, 80, 50);
    connect(previousButton, &QPushButton::clicked, this, &MainWindow::previousChannel);

    increaseButton = new QPushButton("+", this);
    increaseButton->setGeometry(130, 180, 80, 50);
    connect(increaseButton, &QPushButton::clicked, this, &MainWindow::increaseVolume);

    decreaseButton = new QPushButton("-", this);
    decreaseButton->setGeometry(130, 250, 80, 50);
    connect(decreaseButton, &QPushButton::clicked, this, &MainWindow::decreaseVolume);

    displayLabel = new QLabel(this);
    displayLabel->setGeometry(140, 320, 190, 50);
}

void MainWindow::switchChannel()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    currentChannel = button->text().toInt();
    updateDisplay();
}

void MainWindow::nextChannel()
{
    if (currentChannel < 9) {
        currentChannel++;
        updateDisplay();
    }
}

void MainWindow::previousChannel()
{
    if (currentChannel > 0) {
        currentChannel--;
        updateDisplay();
    }
}

void MainWindow::increaseVolume()
{
    if (volumeLevel < 100) {
        volumeLevel += 10;
        updateDisplay();
    }
}

void MainWindow::decreaseVolume()
{
    if (volumeLevel > 0) {
        volumeLevel -= 10;
        updateDisplay();
    }
}

void MainWindow::updateDisplay()
{
    displayLabel->setText("Channel: " + QString::number(currentChannel) + "\nVolume: " + QString::number(volumeLevel) + "%");
}
