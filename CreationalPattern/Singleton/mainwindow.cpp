#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sig1 = Singleton::getInstance();
    sig2 = Singleton::getInstance();
    sig1->printfuc();
    sig2->printfuc();
}

MainWindow::~MainWindow()
{
    delete sig1;
    sig1= NULL;
    //delete sig2;
    delete ui;
}
