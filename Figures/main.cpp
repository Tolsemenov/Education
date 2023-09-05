#include <iostream>
#include "Circle.h"
#include "Point.h"
#include <QApplication>
#include <QMainWindow>
#include <Console.h>

Point points() {
    Point pCopy{ 12,89 };
    pCopy.print();
    return pCopy;
}

int main(int argc, char **argv){
    QApplication app{ argc, argv };
    Console console;
    console.show();
 
    Point p{ 3.9f, 7.9 };
    p.print();
    
    Point pCopy = points();
    pCopy.print();
    
    Circle circle{{4, 7.9}, 5 };

    circle.print();
    
    p = pCopy;

    Point pSum = p + pCopy ;
    pSum.print();


    std::cout << p;
    console << p;

    app.exec();
}