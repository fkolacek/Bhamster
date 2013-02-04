#ifndef HSIDETABWIDGET_H
#define HSIDETABWIDGET_H

#include <QWidget>
#include <QSize>
#include <QTabWidget>
#include <QResizeEvent>

namespace Ui {
    class HSideTabWidget;
}

class HSideTabWidget : public QWidget
{
    Q_OBJECT
    
public:
    explicit HSideTabWidget(QWidget *parent = 0);
    ~HSideTabWidget();

    void resizeEvent(QResizeEvent *);
    
private:
    Ui::HSideTabWidget *ui;

    QTabWidget* sideWidget;

    QWidget* bookmarksWidget;
    QWidget* historyWidget;
};

#endif // HSIDETABWIDGET_H
