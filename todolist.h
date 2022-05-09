#ifndef TODOLIST_H
#define TODOLIST_H

#include <QMainWindow>
#include "QListWidgetItem"

QT_BEGIN_NAMESPACE
namespace Ui { class TODOLIST; }
QT_END_NAMESPACE

class TODOLIST : public QMainWindow
{
    Q_OBJECT

public:
    TODOLIST(QWidget *parent = nullptr);
    ~TODOLIST();

private slots:
    void on_pushButton_clicked();

    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::TODOLIST *ui;
};
#endif // TODOLIST_H
