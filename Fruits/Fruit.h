#pragma once
#include <Console.h>
#include <Color.h>


class Fruit {
protected:
	Color m_color;
	char* m_name;
public:
	Fruit(Color color);

	const char* name() const { return m_name; };

	virtual double weight() { return 0.0; };

	virtual ~Fruit(){}
	
};