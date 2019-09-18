#include"head.h"

Point::Point(double x, double y) :x(x), y(y) {};
Line::Line(double x1, double y1, double x2, double y2) :A(x1, y1), B(x2, y2) {};
Triangle::Triangle(double x1, double y1, double x2, double y2, double x3, double y3) :c(x1, y1, x2, y2), C(x3, y3) {};

void Point::display() {};
void Triangle::display(Triangle t)
{
	double a, b, c, p, S;
	a = sqrt(pow(t.C.x - t.c.B.x, 2) + pow(t.C.y - t.c.B.y, 2));
	b = sqrt(pow(t.C.x - t.c.A.x, 2) + pow(t.C.y - t.c.A.y, 2));
	c = sqrt(pow(t.c.B.x - t.c.A.x, 2) + pow(t.c.A.y - t.c.B.y, 2));
	p = (a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));
	area = S;
	cout << S << endl;
}

void mySum(double a, double b, double c) { cout << a + b + c << endl; }