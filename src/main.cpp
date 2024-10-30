#include "loginForm.h"
#include <connect.h>
#include <mainWindow.h>
#include <qapplication.h>
#include <qboxlayout.h>
#include <qgridlayout.h>
#include <qlabel.h>
#include <qmainwindow.h>
#include <qnamespace.h>
#include <qwidget.h>


int main(int argc, char *argcv[])

{

    QApplication app(argc, argcv);

    QMainWindow window;
    
    loginWindow log;
    window.setCentralWidget(&log);

    window.setWindowTitle("RuCord");
    window.show();

    return app.exec();

}
