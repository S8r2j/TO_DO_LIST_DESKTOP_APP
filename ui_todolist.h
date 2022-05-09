/********************************************************************************
** Form generated from reading UI file 'todolist.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOLIST_H
#define UI_TODOLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TODOLIST
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TODOLIST)
    {
        if (TODOLIST->objectName().isEmpty())
            TODOLIST->setObjectName(QString::fromUtf8("TODOLIST"));
        TODOLIST->resize(524, 428);
        centralwidget = new QWidget(TODOLIST);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 30, 131, 31));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(50, 150, 221, 171));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 80, 221, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 80, 91, 41));
        TODOLIST->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TODOLIST);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 524, 22));
        TODOLIST->setMenuBar(menubar);
        statusbar = new QStatusBar(TODOLIST);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TODOLIST->setStatusBar(statusbar);

        retranslateUi(TODOLIST);

        QMetaObject::connectSlotsByName(TODOLIST);
    } // setupUi

    void retranslateUi(QMainWindow *TODOLIST)
    {
        TODOLIST->setWindowTitle(QCoreApplication::translate("TODOLIST", "TODOLIST", nullptr));
        label->setText(QCoreApplication::translate("TODOLIST", "TO DO LISTS", nullptr));
        pushButton->setText(QCoreApplication::translate("TODOLIST", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TODOLIST: public Ui_TODOLIST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOLIST_H
