#include <mainWindow.h>
#include <loginForm.h>

myWindow* myWindow::window = nullptr;
myWindow::myWindow(QMainWindow *parent): QMainWindow(parent)
{
    loginWidget = new loginWindow;
    this->setCentralWidget(loginWidget);
    window = this;
}
myWindow::~myWindow()
{

}
void myWindow::swapWidget()
{
    loginWidget->close();

    homeWidget = new QWidget; 
    this->setCentralWidget(loginWidget);
    delete loginWidget;
}
myWindow* myWindow::getCurrentWindow()
{
    return window;
}
