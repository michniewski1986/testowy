#include <QCoreApplication>
#include<QVector>
#include<QDebug>
#include<vector>
#include<iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<int> vec(10);
    qFill(vec,5);


    foreach (int val, vec) {
        qDebug() << val;
    }
    //}

    return a.exec();
}
