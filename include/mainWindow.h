#include <connect.h>
#include <qmainwindow.h>
#include <qwidget.h>

class myWindow : public QMainWindow
{
public:
    QWidget *wid;
    myWindow(QWidget* parent= nullptr): QMainWindow(parent)
    {
        wid = new QWidget(this);
        setCentralWidget(wid);
    }
};
