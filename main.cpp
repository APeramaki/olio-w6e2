#include "exampleclass.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass ec = ExampleClass();
    ec.startToWait();

    return a.exec();
}
