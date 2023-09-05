#pragma once
#include <Console.h>
#include "Fruit.h"


class Banana : public Fruit {
	
public:
	Banana();

	virtual double weight() { return 20.5; };

	~Banana();
};