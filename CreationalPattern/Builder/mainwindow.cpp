#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Director.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    AbstractBuilder* builder = new Builder();
    Director* director = new Director(builder);

    director->construct();

    Product* product = builder->getProduct();
    product->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
