// circle_class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class Circle
{
private:	double radius;

public:
	void SetRadius(double r)
	{	radius = r; }

	double getArea()
	{	return 3.14 * pow(radius,2); }

};




int _tmain(int argc, _TCHAR* argv[])
{



	return 0;
}

