/********************************************************************************
** Form generated from reading UI file 'abctabladialog.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABCTABLADIALOG_H
#define UI_ABCTABLADIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_abctabladialog
{
public:
    QAction *actionBaja;
    QAction *actionAlta;
    QLabel *label;
    QTableView *tableView;
    QPushButton *salir_tabla;

    void setupUi(QDialog *abctabladialog)
    {
        if (abctabladialog->objectName().isEmpty())
            abctabladialog->setObjectName(QString::fromUtf8("abctabladialog"));
        abctabladialog->resize(650, 358);
        abctabladialog->setContextMenuPolicy(Qt::DefaultContextMenu);
        actionBaja = new QAction(abctabladialog);
        actionBaja->setObjectName(QString::fromUtf8("actionBaja"));
        actionAlta = new QAction(abctabladialog);
        actionAlta->setObjectName(QString::fromUtf8("actionAlta"));
        label = new QLabel(abctabladialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 153, 16, 16));
        tableView = new QTableView(abctabladialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(9, 9, 631, 301));
        tableView->setContextMenuPolicy(Qt::ActionsContextMenu);
        tableView->setStyleSheet(QString::fromUtf8(""));
        salir_tabla = new QPushButton(abctabladialog);
        salir_tabla->setObjectName(QString::fromUtf8("salir_tabla"));
        salir_tabla->setGeometry(QRect(300, 330, 71, 21));
        salir_tabla->setStyleSheet(QString::fromUtf8("    display: block;\n"
"    background-color: red;\n"
"    border: 1px solid #000000;\n"
"    color: white;"));

        retranslateUi(abctabladialog);

        QMetaObject::connectSlotsByName(abctabladialog);
    } // setupUi

    void retranslateUi(QDialog *abctabladialog)
    {
        abctabladialog->setWindowTitle(QCoreApplication::translate("abctabladialog", "Dialog", nullptr));
        actionBaja->setText(QCoreApplication::translate("abctabladialog", "Baja", nullptr));
        actionAlta->setText(QCoreApplication::translate("abctabladialog", "Alta", nullptr));
        label->setText(QString());
        salir_tabla->setText(QCoreApplication::translate("abctabladialog", "SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class abctabladialog: public Ui_abctabladialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABCTABLADIALOG_H
