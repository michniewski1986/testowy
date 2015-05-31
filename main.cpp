#include <QCoreApplication>
#include<QVector>
#include<QDebug>
#include<iostream>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector<int> vec;
    qFill(vec,5);
    int val=8;
    //foreach (int val, vec) {
       qDebug() <<  val;
    //}

    // alleluja
    int aa=5;
        std::cout << aa;
    return a.exec();
}
