/**Driver Code*/

/**
Programmer: 
Project number: 1
Project Desc: Quadratic Expression class
Course: COSC-2436-007 (92905) III Data Structures
Date:   
*/
/** @file driver.cpp */

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle rect;
	
	cout << "Intital state of the Rectangle" << endl;
	cout << "    width = " << rect.getWidth() << endl;
    cout << "    length = " << rect.getLength() << endl;
	cout << "    area = " << rect.getArea() << endl << endl;
	
	rect.set(2.0, 3.0);
	cout << "Current state of the Rectangle" << endl;
	cout << "    width = " << rect.getWidth() << endl;
    cout << "    length = " << rect.getLength() << endl;
	cout << "    area = " << rect.getArea() << endl << endl;
	
	return 0;
}