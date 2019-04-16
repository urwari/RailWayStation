#ifndef BD_INTERFACE_H
#define BD_INTERFACE_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QFile>
#include <QDebug>

class bd_interface
{
    QSqlDatabase db;
    bool isWorking;
public:
    bd_interface(QString path = nullptr);
    bool write(QString name, QByteArray DataBase64);
    QByteArray readBase64(QString name);

};

#endif // BD_INTERFACE_H
