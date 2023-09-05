#include <iostream>
#include "Fractions.h"
#include <QApplication>
#include <QMainWindow>
#include "Console.h"

int main(int argc, char **argv){
    QApplication app(argc, argv);
    Console console;
    console.show();
    Fractions fraction(1, 2);
    fraction.print();


    app.exec();
}