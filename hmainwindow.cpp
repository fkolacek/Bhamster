#include "hmainwindow.h"
#include "ui_hmainwindow.h"

HMainWindow::HMainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::HMainWindow){
    ui->setupUi(this);
}

HMainWindow::~HMainWindow(){
    delete ui;
}

void HMainWindow::resizeEvent(QResizeEvent *event){


    QMainWindow::resizeEvent(event);
}
