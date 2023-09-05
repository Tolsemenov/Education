#include "Fruit.h"
#include <iostream>
#include <string.h>

Fruit::Fruit(Color color)
: m_color(color), m_name(nullptr){

};

Fruit::~Fruit() {
	if (m_name) {
		delete[] m_name;
		m_name = nullptr;
	}
}