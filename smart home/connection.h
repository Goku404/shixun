#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlQuery>
static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database.db");
    if(!db.open()) return false;
    QSqlQuery query;
    query.exec("create table dataforht (id int primary key, humanity int, temperature int)");
    query.exec("insert into dataforht values (1,24,74)");
    query.exec("insert into dataforht values (2,25,65)");
    query.exec("insert into dataforht values (3,32,88)");
    return true;
}
#endif // CONNECTION_H
