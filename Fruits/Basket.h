#pragma once
#include "Fruit.h"
#include "Console.h"



class Basket {
	static const int MAX_SIZE = 20;
	Fruit* m_fruits[MAX_SIZE] = {};
	int m_currentSize = 0;
public:
	Basket();

	void addFruit(Fruit* fruit);
	~Basket();

	friend Consol& operator<< (Consol& console, const Basket& right);


};