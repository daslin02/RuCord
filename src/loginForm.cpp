#include <loginForm.h>
#include <mainWindow.h>



loginWindow::loginWindow(QWidget *parent ) : QWidget(parent)
{
    mainWidget = new QWidget;
    formLog = new QWidget;
    ui = new Ui::W_Aut;
    

    setStyle();
    ui->setupUi(formLog);

    GL = new QGridLayout(this);
    VL = new QVBoxLayout(mainWidget);
    
    GL->addWidget(mainWidget , 0 ,0, Qt::AlignCenter);        
    VL->addWidget(formLog);
       
     

    this->setLayout(GL);
    mainWidget->setLayout(VL);
    connect(ui->PB_login , &QPushButton::clicked ,
           this   , &loginWindow::loginBtnEvent);
}

loginWindow::~loginWindow()
{
    delete GL;
    delete mainWidget;
    delete ui;
}
void loginWindow::setStyle()
{
    formLog->setStyleSheet("background: #4D4D4D;" 
            "border-radius: 16px;");
}

void loginWindow::loginBtnEvent()
{

    if (!(ui->LE_login->text().isEmpty() && ui->LE_password->text().isEmpty()))
    {

        myWindow* win = myWindow::getCurrentWindow();
        if (win)
        {
            win->swapWidget();
        }
    
    }
}
