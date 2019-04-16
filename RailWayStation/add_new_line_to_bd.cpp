#include "add_new_line_to_bd.h"
#include "ui_add_new_line_to_bd.h"

add_new_line_to_bd::add_new_line_to_bd(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_new_line_to_bd)
{
    ui->setupUi(this);
    setAcceptDrops(true);
}

add_new_line_to_bd::~add_new_line_to_bd()
{
    delete ui;
}

void add_new_line_to_bd::on_pushButton_clicked()
{
    QFile file;
    file.setFileName(ui->le_path->text());
    if(!file.open(QIODevice::ReadOnly)){
        QMessageBox::information(this,"внимание","Не удалось открыть файл.");
        return;
    }
    QByteArray data;
    data = file.readAll();
    bd.write(ui->le_fileName->text(), data.toBase64());
}

void add_new_line_to_bd::on_buttonBox_accepted()
{
    qDebug() << bd.readBase64("два");
}

void add_new_line_to_bd::dragEnterEvent(QDragEnterEvent *event)
{
    event->accept();
}

void add_new_line_to_bd::dropEvent(QDropEvent *event)
{
    ui->le_path->setText( event->mimeData()->urls()[0].toLocalFile() );
}


