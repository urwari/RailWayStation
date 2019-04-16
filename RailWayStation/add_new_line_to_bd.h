#ifndef ADD_NEW_LINE_TO_BD_H
#define ADD_NEW_LINE_TO_BD_H

#include <QDialog>

namespace Ui {
class add_new_line_to_bd;
}

class add_new_line_to_bd : public QDialog
{
    Q_OBJECT

public:
    explicit add_new_line_to_bd(QWidget *parent = 0);
    ~add_new_line_to_bd();

private:
    Ui::add_new_line_to_bd *ui;
};

#endif // ADD_NEW_LINE_TO_BD_H
