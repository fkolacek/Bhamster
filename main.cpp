#include <QApplication>
#include <QTextCodec>
#include "hmainwindow.h"

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));

    app.setApplicationName("Hamster");
    app.setApplicationVersion("0.1");


    HMainWindow window;
    window.show();
    
    return app.exec();
}
