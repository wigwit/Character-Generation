#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "character.h"
#include<QList>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setCharacter();
    void setComboBox();
public slots:


private:
    Ui::MainWindow *ui;
    character* skin;
    character* hair;
    character* mood;
    character* hat;
};

#endif // MAINWINDOW_H
