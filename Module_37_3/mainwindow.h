#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void switchChannel();
    void nextChannel();
    void previousChannel();
    void increaseVolume();
    void decreaseVolume();

private:
    QPushButton *channelButtons[10];
    QPushButton *nextButton;
    QPushButton *previousButton;
    QPushButton *increaseButton;
    QPushButton *decreaseButton;
    QLabel *displayLabel;

    int currentChannel;
    int volumeLevel;

    void setupUi();
    void updateDisplay();
};

#endif // MAINWINDOW_H
