#include "Banana.h"
#include <iostream>
#include <string.h>

Banana::Banana() : Fruit(Color({255, 0, 255}))
{

	m_name = new char[strlen("Banana") + 1];
	memcpy(m_name, "Banana", strlen("Banana") + 1);

};


Banana::~Banana() 
{
	Consol::write("Destruct Banana\n");
};