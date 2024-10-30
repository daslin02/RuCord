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

    QWidget *logWid = new QWidget;
    QWidget *loginForm = new QWidget;
    QWidget *central = new QWidget;
    Ui::W_Aut uiLoginForm;
    uiLoginForm.setupUi(loginForm);
   
    QGridLayout *GL = new QGridLayout(central);
    QVBoxLayout *VL = new QVBoxLayout(logWid);
    GL->addWidget(logWid , 0 ,0 ,Qt::AlignCenter);
    VL->addWidget(loginForm);

    central->setLayout(GL);
    logWid->setLayout(VL);

    window.setCentralWidget(central);

    window.setWindowTitle("RuCord");
    window.show();

    return app.exec();

}
