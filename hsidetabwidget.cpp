#include "hsidetabwidget.h"

HSideTabWidget::HSideTabWidget(QWidget *parent) : QWidget(parent){
    this->bookmarksWidget = new QWidget(this);
    this->historyWidget = new QWidget(this);

    this->sideWidget = new QTabWidget(this);

    this->sideWidget->setTabPosition(QTabWidget::West);
    this->sideWidget->addTab(this->bookmarksWidget, "Bookmarks");
    this->sideWidget->addTab(this->historyWidget, "History");




    this->sideWidget->resize(this->size());
}

HSideTabWidget::~HSideTabWidget(){
    delete this->bookmarksWidget;
    delete this->historyWidget;
    delete this->sideWidget;

    this->sideWidget = NULL;
}

void HSideTabWidget::resizeEvent(QResizeEvent *event){

    this->sideWidget->resize(this->size());

    QWidget::resizeEvent(event);
}
