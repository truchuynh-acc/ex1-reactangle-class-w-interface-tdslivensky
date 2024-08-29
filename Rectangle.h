/** @file Circle.h */

#ifndef RECTANGLE_
#define RECTANGLE_

#include "RectangleInterface.h"

class Rectangle : public RectangleInterface
{
public:
	Rectangle();
	void set(double newWidth, double newLength);
	double getWidth() const;
    double getLength() const;
	double getArea() const;
	~Rectangle() {}
private:
	double width;
    double length;
};
#endif