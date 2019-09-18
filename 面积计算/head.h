#pragma once
#include<iostream>
#include<cmath>
using namespace std;

void mySum(double a, double b, double c);//计算面积的函数

class Point
{
public:
	Point(double x = 0, double y = 0);
	virtual void display();
private:
	double x;
	double y;
	friend class Line;
	friend class Triangle;
};

class Line :virtual public Point
{
public:
	Line(double x1 = 0, double y1 = 0, double x2 = 0, double y2 = 0);
private:
	Point A;
	Point B;
	friend class Triangle;
};

class Triangle :public Line
{
public:
	Triangle(double x1 = 0, double y1 = 0, double x2 = 0, double y2 = 0, double x3 = 0, double y3 = 0);
	virtual void display(Triangle t);
	double S() { return area; }//返回对象的成员变量area
private:
	Line c;
	Point C;
	double area;
};

