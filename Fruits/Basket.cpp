#include <iostream>
#include "Basket.h"
#include <QApplication>
#include <QString>


Basket::Basket(){

};

void Basket::addFruit(Fruit* fruit) {
	if (!fruit)
		return;
	if (m_currentSize >= MAX_SIZE) {
		delete fruit;
		fruit = nullptr;
		return;
	}

	m_fruits[m_currentSize++] = fruit;

}

Consol& operator<< (Consol& console, const Basket& right) {
	console.write("Basket begin\n");
	for (int ind = 0; ind < right.m_currentSize; ++ind) {
		console.write(right.m_fruits[ind]->name());
		console.write("\n");
	}
	console.write("Basket end\n\n");
	return console;
}





Basket::~Basket() {
	for (int ind = 0; ind < m_currentSize; ++ind) {
		if (m_fruits[ind]) {
			delete m_fruits[ind];
			m_fruits[ind] = nullptr;
		}
	}
};




