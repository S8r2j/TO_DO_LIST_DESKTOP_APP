#include "todolist.h"
#include "QListWidgetItem"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TODOLIST w;
    w.show();
    return a.exec();
}
