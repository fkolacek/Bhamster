#ifndef HMAINWINDOW_H
#define HMAINWINDOW_H

#include <QMainWindow>
#include <QResizeEvent>
#include "hsidetabwidget.h"

namespace Ui {
class HMainWindow;
}

class HMainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit HMainWindow(QWidget *parent = 0);
    ~HMainWindow();

    void resizeEvent(QResizeEvent *);
    
private:
    Ui::HMainWindow *ui;
};

#endif // HMAINWINDOW_H
