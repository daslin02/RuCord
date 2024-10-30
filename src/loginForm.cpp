#include <loginForm.h>




loginWindow::loginWindow(QWidget *parent ) : QWidget(parent)
{
    mainWidget = new QWidget;
    formLog = new QWidget;
    ui = new Ui::W_Aut;
    

    ui->setupUi(formLog);

    GL = new QGridLayout(this);
    VL = new QVBoxLayout(mainWidget);
    
    GL->addWidget(mainWidget , 0 ,0, Qt::AlignCenter);        
    VL->addWidget(formLog);
       
     

    this->setLayout(GL);
    mainWidget->setLayout(VL);
    connect(ui->PB_login , &QPushButton::clicked ,
            this , &loginWindow::clickBtn);

}

loginWindow::~loginWindow()
{
    delete GL;
    delete mainWidget;
    delete ui;
}


void loginWindow::clickBtn()
{
    std::cout << "clicked" << std::endl;
}
