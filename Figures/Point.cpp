#include "Point.h"
#include <iostream>
#include <string.h>


int Point::s_count = 0;





Point::Point(const Point& object)
: Point(object.m_x, object.m_y){
	m_name = new char[strlen(object.m_name) + 1];
	memcpy(m_name, object.m_name, strlen(object.m_name) + 1);	
}



Point::Point(double x, double y)
:m_x(x), m_y(y){

	m_name = new char[3];
	m_name[0] = 'N';
	m_name[1] = 'o';
	m_name[2] = '\0';

	++s_count;
	Consol::write("Construct \n");
}

Point::Point()
:Point(0,0){

}

Point &Point::operator=(const Point& object) {

	Consol::write("operator =\n");
	if (m_name) {
		delete[] m_name;
		m_name = nullptr;
	}
	m_x = object.m_x;
	m_y = object.m_y;

	m_name = new char[strlen(object.m_name) + 1];
	memcpy(m_name, object.m_name, strlen(object.m_name) + 1);
	return *this;

}

Point Point::operator+(const Point& right) {
	return Point{ m_x + right.m_x, m_y + right.m_y };
}

Point Point::operator+(double num) {
	return Point{ m_x + num, m_y + num};
}

Point operator+(double left, const Point& right) {
	 Point point{ right.m_x + left, right.m_y + left };
	 return point;
};


Point Point::operator++(int){	
	Point returnPoint{ *this };
	++m_x;
	++m_y;
	return returnPoint;
}
Point &Point::operator++() {
	++m_x;
	++m_y;
	return *this;
}



Point::~Point() {
	if (m_name) {
		delete[] m_name;
		m_name = nullptr;
	}
	std::cout << "Destrucctor" << std::endl;
	if (m_name) {
		delete[] m_name;
		m_name = nullptr;
	}
}

void Point::print() const{

	char* text = new char[50];
	sprintf(text, "X : %f ; Y : %f; %s;\n", m_x, m_y, m_name);
	Console::write(text);
	delete[] text;
	text = nullptr;
	//std::cout << "Constructor " << std::endl
	//	<< "X : " << m_x << std::endl
	//	<< "Y : " << m_y << std::endl
	//	<< "Name : " << m_name << std::endl << std::endl;
}

void Point::printCount() const {
	std::cout << "s_count = " << s_count << std::endl;
}


int Point::getCounter() { return s_count; }

std::ostream& operator<<(std::ostream& out, const Point& right) {
	return out << "X : " << right.m_x << "; Y : " << right.m_y << "\n";
};

Console& operator<<(Console& out, const Point& right) {
	char* text = new char[50];
	sprintf(text, "X : %f ; Y : %f; %s;\n", right.m_x, right.m_y, right.m_name);
	out.write(text);
	delete[] text;
	text = nullptr;
	return out;
};