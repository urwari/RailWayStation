#include "add_new_line_to_bd.h"
#include "ui_add_new_line_to_bd.h"

add_new_line_to_bd::add_new_line_to_bd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_new_line_to_bd)
{
    ui->setupUi(this);
}

add_new_line_to_bd::~add_new_line_to_bd()
{
    delete ui;
}
