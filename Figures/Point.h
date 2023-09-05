#pragma once
#include <Console.h>

class Point {

	double m_x;
	double m_y;
	static int s_count;

	char* m_name;					// 8 байт

	friend class Circle;

public:
	Point(const Point& object);
	Point(double x, double y);

	Point();
	Point& operator=(const Point& object);
	Point operator+(const Point& right);
	Point operator+(double num);
	friend Point operator+(double left, const Point& right);
	Point operator++(int);
	Point& operator++();

	friend std::ostream& operator<<(std::ostream& out, const Point& right);
	friend Consol& operator<<(Consol& out, const Point& right);

	~Point();



	double getX() const { return m_x; };
	double getY() const { return m_x; };

	double setX(double x) { m_x = x; };
	double setY(double x) { m_x = x; };

	void print() const;
	void printCount() const;

	static int getCounter();
};