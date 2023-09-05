#pragma once

class Fractions {
private:
	int m_numerator;
	int m_denominator;


public:


	Fractions(int m_numerator, int m_denominator)
		: m_numerator(m_numerator), m_denominator(m_denominator) {};

	void print() const;

	/*
	Fractions(const Fractions& object);
	Fractions(int numerator, int denominator) ;
	~Fractions() ;

	int getNumerator() const { return m_numerator; };
	int getDenominator() const { return m_denominator; };

	int setFractions(int numerator) { m_numerator = numerator; };
	int setDenominator(int denominator) { m_denominator = denominator; };

	void print();
	Fractions operator+(const Fractions& right);
	Fractions operator-(const Fractions& right);
	Fractions operator/(const Fractions& right);
	Fractions operator*(const Fractions& right);

	Fractions operator+(const int right);
	Fractions operator-(const int right);
	Fractions operator/(const int right);
	Fractions operator*(const int right);

	*/

};
