#pragma once
#include <Point.h>



class Circle{

	Point m_center;
	double m_radius;

public:
	Circle(Point m_center, double radius);
	

	void print ()const;

	friend void print(Circle circle) {
		circle.m_center;
	}


};