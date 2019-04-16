#include "add_new_line_to_bd.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    add_new_line_to_bd w;
    w.show();

    return a.exec();
}
