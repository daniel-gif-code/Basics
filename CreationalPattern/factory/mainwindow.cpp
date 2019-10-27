#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   factory = new ConcreteFactory();
   product =  factory->CreateProduct(0);
   productB =  factory->CreateProduct(1);

}

MainWindow::~MainWindow()
{
    delete factory;
    delete  product;
    delete productB;

    delete ui;
}

