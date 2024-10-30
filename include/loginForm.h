
#ifndef LOGINFORM_H
#define LOGINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qfont.h>

QT_BEGIN_NAMESPACE

class Ui_W_Aut
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *F_name;
    QVBoxLayout *verticalLayout_2;
    QLabel *L_name;
    QFrame *F_autForm;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLineEdit *LE_login;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *LE_password;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_4;
    QPushButton *PB_login;

    void setupUi(QWidget *W_Aut)
    {
        if (W_Aut->objectName().isEmpty())
            W_Aut->setObjectName(QString::fromUtf8("W_Aut"));
        W_Aut->resize(400, 400);
        W_Aut->setMinimumSize(QSize(400, 400));
        W_Aut->setMaximumSize(QSize(16777215, 16777215));
        W_Aut->setStyleSheet(QString::fromUtf8("border_radius:16px;"));
        verticalLayout = new QVBoxLayout(W_Aut);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        F_name = new QFrame(W_Aut);
        F_name->setObjectName(QString::fromUtf8("F_name"));
        F_name->setMinimumSize(QSize(0, 70));
        F_name->setMaximumSize(QSize(16777215, 16777215));
        F_name->setStyleSheet(QString::fromUtf8("border:none;"));
        F_name->setFrameShape(QFrame::StyledPanel);
        F_name->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(F_name);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        L_name = new QLabel(F_name);
        L_name->setObjectName(QString::fromUtf8("L_name"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans ExtraBold"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(QFont::Thin);
        L_name->setFont(font);
        L_name->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(L_name);


        verticalLayout->addWidget(F_name);

        F_autForm = new QFrame(W_Aut);
        F_autForm->setObjectName(QString::fromUtf8("F_autForm"));
        F_autForm->setStyleSheet(QString::fromUtf8("border:none;"));
        F_autForm->setFrameShape(QFrame::StyledPanel);
        F_autForm->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(F_autForm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        LE_login = new QLineEdit(F_autForm);
        LE_login->setObjectName(QString::fromUtf8("LE_login"));
        LE_login->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setPointSize(15);
        LE_login->setFont(font1);
        LE_login->setStyleSheet(QString::fromUtf8("border-radius: 16px;\n"
"padding-left:15px;"));
        LE_login->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(LE_login);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        LE_password = new QLineEdit(F_autForm);
        LE_password->setObjectName(QString::fromUtf8("LE_password"));
        LE_password->setMinimumSize(QSize(0, 50));
        LE_password->setFont(font1);
        LE_password->setStyleSheet(QString::fromUtf8("border-radius: 16px;\n"
"padding-left:15px;"));
        LE_password->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(LE_password);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        frame_3 = new QFrame(F_autForm);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setCursor(QCursor(Qt::PointingHandCursor));
        frame_3->setStyleSheet(QString::fromUtf8("background:white;\n"
"\n"
"border-radius: 16px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(1, 1, 1, 1);
        PB_login = new QPushButton(frame_3);
        PB_login->setObjectName(QString::fromUtf8("PB_login"));
        PB_login->setMinimumSize(QSize(0, 50));
        PB_login->setFont(font1);
        PB_login->setStyleSheet(QString::fromUtf8("color:black;"));

        verticalLayout_4->addWidget(PB_login);


        verticalLayout_3->addWidget(frame_3);


        verticalLayout->addWidget(F_autForm);


        retranslateUi(W_Aut);
        QMetaObject::connectSlotsByName(W_Aut);
    } // setupUi

    void retranslateUi(QWidget *W_Aut)
    {
        W_Aut->setWindowTitle(QCoreApplication::translate("W_Aut", "Form", nullptr));
        L_name->setText(QCoreApplication::translate("W_Aut", "RuCord", nullptr));
        LE_login->setPlaceholderText(QCoreApplication::translate("W_Aut", "Login", nullptr));
        LE_password->setPlaceholderText(QCoreApplication::translate("W_Aut", "Password", nullptr));
        PB_login->setText(QCoreApplication::translate("W_Aut", "LogIn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class W_Aut: public Ui_W_Aut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGINFORM_H
