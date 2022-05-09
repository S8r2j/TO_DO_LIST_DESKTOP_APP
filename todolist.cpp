#include "todolist.h"
#include "ui_todolist.h"
#include "QListWidgetItem"
#include "QListWidget"
#include "QMessageBox"

TODOLIST::TODOLIST(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TODOLIST)
{
    ui->setupUi(this);
    ui->lineEdit->placeholderText()="Enter your to do task here";
}

TODOLIST::~TODOLIST()
{
    delete ui;
}


void TODOLIST::on_pushButton_clicked()
{
    QString str=ui->lineEdit->text();
    if(str=="")
    {
        QMessageBox::warning(this, "Invalid Input", "Enter the task");
    }
    else{
    ui->listWidget->addItem(str);
    ui->lineEdit->clear();
    }
}



void TODOLIST::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    int index= ui->listWidget->row(item);
    ui->listWidget->takeItem(index);
}

