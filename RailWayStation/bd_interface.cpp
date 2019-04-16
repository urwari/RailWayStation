#include "bd_interface.h"

bd_interface::bd_interface(QString path)
{
    if(path == nullptr)
        path = "C:\\root\\data.db";
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);
    if(!db.open()){
        isWorking = false;
    } else
        isWorking = true;
}

bool bd_interface::write(QString name, QByteArray DataBase64)
{
    if(!isWorking)
        return false;
    QSqlQuery query;
    QString str1 = QString("INSERT INTO information ('name', 'binary') VALUES ('%1', '%2');").arg(name).arg(QString(DataBase64));
    query.exec(str1);
    return true;
}

QByteArray bd_interface::readBase64(QString name)
{
    if(!isWorking)
        return QByteArray("");
    QSqlQuery query;
    QString str1 = QString("SELECT binary FROM information WHERE name = '%1';").arg(name);
    query.exec(str1);
    while(query.next())
        return query.value(0).toByteArray().toBase64();
    return QByteArray("");
}
