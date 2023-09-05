#include "Fruit.h"
#include <iostream>
#include <cstring>
#include "Apple.h"

Apple::Apple() : Fruit({255, 0, 255}){

	m_name = new char[strlen("Apple") + 1];
	memcpy(m_name, "Apple", strlen("Apple") + 1);

};
Apple::~Apple() {
	Consol::write("Destruct Apple\n");

}