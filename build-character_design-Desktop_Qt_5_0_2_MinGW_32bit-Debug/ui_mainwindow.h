/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *skin_label;
    QLabel *hair_label;
    QLabel *mood_label;
    QLabel *hat_label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *skin_box;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *hair_box;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *hat_box;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *mood_box;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(811, 467);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        skin_label = new QLabel(centralWidget);
        skin_label->setObjectName(QStringLiteral("skin_label"));
        skin_label->setGeometry(QRect(270, 40, 481, 381));
        hair_label = new QLabel(centralWidget);
        hair_label->setObjectName(QStringLiteral("hair_label"));
        hair_label->setGeometry(QRect(290, 20, 321, 161));
        mood_label = new QLabel(centralWidget);
        mood_label->setObjectName(QStringLiteral("mood_label"));
        mood_label->setGeometry(QRect(420, 270, 181, 81));
        hat_label = new QLabel(centralWidget);
        hat_label->setObjectName(QStringLiteral("hat_label"));
        hat_label->setGeometry(QRect(340, 30, 301, 161));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 20, 191, 231));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        skin_box = new QComboBox(widget);
        skin_box->setObjectName(QStringLiteral("skin_box"));

        horizontalLayout->addWidget(skin_box);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        hair_box = new QComboBox(widget);
        hair_box->setObjectName(QStringLiteral("hair_box"));

        horizontalLayout_2->addWidget(hair_box);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        hat_box = new QComboBox(widget);
        hat_box->setObjectName(QStringLiteral("hat_box"));

        horizontalLayout_4->addWidget(hat_box);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        mood_box = new QComboBox(widget);
        mood_box->setObjectName(QStringLiteral("mood_box"));

        horizontalLayout_5->addWidget(mood_box);


        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 811, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        skin_label->setText(QApplication::translate("MainWindow", "skin", 0));
        hair_label->setText(QApplication::translate("MainWindow", "hair", 0));
        mood_label->setText(QApplication::translate("MainWindow", "mood", 0));
        hat_label->setText(QApplication::translate("MainWindow", "hat", 0));
        label->setText(QApplication::translate("MainWindow", "Skin ", 0));
        label_2->setText(QApplication::translate("MainWindow", "Hair", 0));
        label_4->setText(QApplication::translate("MainWindow", "Hat", 0));
        label_5->setText(QApplication::translate("MainWindow", "Mood", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
