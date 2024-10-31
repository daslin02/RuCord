#include <connect.h>
#include <qmainwindow.h>



class myWindow : public QMainWindow
{
public:
    explicit myWindow(QMainWindow *parent= nullptr);
    ~myWindow();
    static myWindow* getCurrentWindow();
    void swapWidget();

private:
    static myWindow* window;
    QWidget *loginWidget;
    QWidget *homeWidget;
};
