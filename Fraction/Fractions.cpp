#include "Fractions.h"
#include <iostream>
#include "Console.h"




void Fractions::print() const {
	char* text = new char[50];
	sprintf(text, "%n %d\n", m_numerator, m_denominator);
	Console::write(text);
	delete[] text;
	text = nullptr;
};











/*

Fractions::Fractions(const Fractions& object) 
: Fractions(object.m_numerator, object.m_denominator) {
	m_name = new char[strlen(object.m_name) + 1];
};


Fractions::Fractions(int numerator, int denominator)
	:m_numerator(numerator), m_denominator(denominator) {

};

Fractions::~Fractions() {

};


void Fractions::print() {
	std::cout << m_numerator << "/" << m_denominator << std::endl;
};

Fractions Fractions::operator+(const Fractions& right) {
	int resultNumerator = m_numerator * right.m_denominator + right.m_numerator * m_denominator;
	int resultDenominator = m_denominator * right.m_denominator;
	Fractions resul{ resultNumerator , resultDenominator };
	return resul;
};

Fractions Fractions::operator-(const Fractions& right) {
	int resultNumerator = m_numerator * right.m_denominator - right.m_numerator * m_denominator;
	int resultDenominator = m_denominator * right.m_denominator;
	Fractions resul{ resultNumerator , resultDenominator };
	return resul;
};

Fractions Fractions::operator/(const Fractions& right) {
	int resultNumerator = m_numerator / right.m_numerator;
	int resultDenominator = m_denominator / right.m_denominator;
	Fractions resul{ resultNumerator , resultDenominator };
	return resul;
};

Fractions Fractions::operator*(const Fractions& right) {
	int resultNumerator = m_numerator * right.m_numerator;
	int resultDenominator = m_denominator * right.m_denominator;
	Fractions resul{ resultNumerator , resultDenominator };
	return resul;
};




Fractions Fractions::operator+(const int right) {
	int resultNumerator = m_numerator + right * m_denominator;
	int resultDenominator = m_denominator;
	Fractions resul{ resultNumerator , resultDenominator };
	return resul;
};

Fractions Fractions::operator-(const int right) {
	int resultNumerator = m_numerator - right * m_denominator;
	int resultDenominator = m_denominator;
	Fractions resul{ resultNumerator , resultDenominator };
	return resul;
};

Fractions Fractions::operator/(const int right) {
	int resultNumerator = m_numerator / right;
	int resultDenominator = m_denominator / right;
	Fractions resul{ resultNumerator , resultDenominator };
	return resul;
};

Fractions Fractions::operator*(const int right) {
	int resultNumerator = m_numerator * right ;
	int resultDenominator = m_denominator ;
	Fractions resul{ resultNumerator , resultDenominator };
	return resul;
};


*/