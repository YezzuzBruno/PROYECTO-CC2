/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *salir;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *contrasenia;
    QLabel *label;
    QPushButton *entrar;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *usuario;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(595, 354);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        salir = new QPushButton(centralwidget);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(240, 250, 131, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        salir->setFont(font);
        salir->setStyleSheet(QString::fromUtf8("    background-color: red;\n"
"    border: 1px solid #000000;\n"
"    color: white;\n"
""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(150, 20, 301, 201));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: white;"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        contrasenia = new QLineEdit(groupBox);
        contrasenia->setObjectName(QString::fromUtf8("contrasenia"));
        contrasenia->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);"));
        contrasenia->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(contrasenia);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        entrar = new QPushButton(groupBox);
        entrar->setObjectName(QString::fromUtf8("entrar"));
        entrar->setStyleSheet(QString::fromUtf8("background-color: lime;\n"
""));

        gridLayout->addWidget(entrar, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        usuario = new QLineEdit(groupBox);
        usuario->setObjectName(QString::fromUtf8("usuario"));
        usuario->setStyleSheet(QString::fromUtf8("background-color: rgb(188, 188, 188);"));

        horizontalLayout->addWidget(usuario);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 601, 341));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/imagenes/montanas-minimalista-degradado-azul-7869.png")));
        label_4->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label_4->raise();
        salir->raise();
        groupBox->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 595, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        salir->setText(QCoreApplication::translate("MainWindow", "SALIR", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Inicio de seci\303\263n", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Iniciar Seci\303\263n", nullptr));
        entrar->setText(QCoreApplication::translate("MainWindow", "ENTRAR", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Usuario", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
