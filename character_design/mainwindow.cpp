#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCharacter();
    setComboBox();
    connect(ui->hair_box,SIGNAL(activated(QString)),hair,SLOT(setLabel(QString)));
    connect(ui->skin_box,SIGNAL(activated(QString)),skin,SLOT(setLabel(QString)));
    connect(ui->mood_box,SIGNAL(activated(QString)),mood,SLOT(setLabel(QString)));
    connect(ui->hat_box,SIGNAL(activated(QString)),hat,SLOT(setLabel(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCharacter()
{
    skin =new character(this,ui->skin_label);

    //  I tried to reimplement this part with pointer
    //However, it does not work well with resource file
    skin->addImage(":/skin/character pics/dark_skin.png");
    skin->addIndex("dark");
    skin->addImage(":/skin/character pics/medium_skin.png");
    skin->addIndex("medium");
    skin->addImage(":/skin/character pics/light_skin.png");
    skin->addIndex("light");

    hair=new character(this,ui->hat_label);
    hair->addImage(":/hair/character pics/black_hair.png");
    hair->addIndex("black");
    hair->addImage(":/hair/character pics/purple_hair.png");
    hair->addIndex("purple");
    hair->addImage(":/hair/character pics/brown_hair.png");
    hair->addIndex("brown");
    hair->addImage(":/hair/character pics/pink_hair.png");
    hair->addIndex("pink");

    mood=new character (this,ui->mood_label);
    mood->addImage(":/mood/character pics/happy_mood.png");
    mood->addIndex("happy");
    mood->addImage(":/mood/character pics/sad_mood.png");
    mood->addIndex("sad");

    hat=new character(this,ui->hat_label);
    hat->addImage(":/hat/character pics/black_hat.png");
    hat->addIndex("black");
    hat->addImage(":/hat/character pics/green_hat.png");
    hat->addIndex("green");
    hat->addImage(":/hat/character pics/red_hat.png");
    hat->addIndex("red");
}

void MainWindow::setComboBox()
{
   skin->setComboBox(ui->skin_box);
   hair->setComboBox(ui->hair_box);
   mood->setComboBox(ui->mood_box);
   hat->setComboBox(ui->hat_box);
}
