#ifndef ADD_NEW_LINE_TO_BD_H
#define ADD_NEW_LINE_TO_BD_H

#include <QDialog>
#include <QFile>
#include <QMessageBox>
#include "bd_interface.h"

#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>

#include <QDebug>

namespace Ui {
class add_new_line_to_bd;
}

class add_new_line_to_bd : public QDialog
{
    Q_OBJECT
    bd_interface bd;
public:
    explicit add_new_line_to_bd(QWidget *parent = 0);
    ~add_new_line_to_bd();



    void dropEvent(QDropEvent *event);
    void dragEnterEvent(QDragEnterEvent *event);
private slots:
    void on_buttonBox_accepted();

    void on_pushButton_clicked();

private:
    Ui::add_new_line_to_bd *ui;
};

#endif // ADD_NEW_LINE_TO_BD_H
