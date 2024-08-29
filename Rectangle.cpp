/** @file Rectangle.cpp */

#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 1.0;
    length = 1.0;
}

void Rectangle::set(double newWidth, double newLength)
{
	if (newWidth > 0.0 && newLength > 0.0)
	{
		length = newLength;
        width = newWidth;
	}
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}


double Rectangle::getArea() const
{
	return width * length;
}