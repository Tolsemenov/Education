#pragma once
#include <Console.h>
#include <Fruit.h>
#include <Apple.h>


class Apple : public Fruit
{


public:
	Apple();
	double weight()override { return 10.5; };
	~Apple();
};