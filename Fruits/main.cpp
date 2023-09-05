#include <iostream>
#include <QApplication>
#include <QMainWindow>
#include "Console.h"
#include "Basket.h"
#include "Apple.h"
#include "Banana.h"





int main(int argc, char **argv){
    QApplication app{ argc, argv };
    Consol console;

    console.show();



    Basket *basket = new Basket;
    basket->addFruit(new Apple);
    basket->addFruit(new Apple);
    basket->addFruit(new Banana);

    console << *basket;

    delete basket;

    app.exec();
}