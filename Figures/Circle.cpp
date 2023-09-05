#include "Circle.h"
#include "Console.h"
#include <string.h>
#include <stdio.h>

Circle::Circle(Point center, double radius)
:m_center(center), m_radius(radius) {

}

void Circle::print()const {
	char* text = new char[50];
	sprintf(text, "Centr : %f, %f; Radius :%f;\n", m_center.m_x, m_center.m_y, m_radius);
	Consol::write(text);
}


