// Grading app with Function.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


string first, lettergrade;
int test1, test2, final, assign, proj;
float finalgrade;


void grades()
{

	cout << "\n\nEnter Test 1 grade:  ";
	cin >> test1;

	cout << "\n\nEnter Test 2 grade:  ";
	cin >> test2;

	cout << "\n\nEnter Final exam grade:  ";
	cin >> final;

	cout << "\n\nEnter assignments grade:  ";
	cin >> assign;

	cout << "\n\nEnter project grade:  ";
	cin >> proj;

	//calculate
	finalgrade = (test1*.15) + (test2*.15) + (final*.2) + (assign*.2) + (proj*.3);

}

void gradeResults()
{

	if (finalgrade >= 93)
		lettergrade = "A";
	else if (finalgrade >= 90)
		lettergrade = "A-";
	else if (finalgrade >= 87)
		lettergrade = "B+";
	else if (finalgrade >= 83)
		lettergrade = "B";
	else if (finalgrade >= 80)
		lettergrade = "B-";
	else if (finalgrade >= 77)
		lettergrade = "C+";
	else if (finalgrade >= 70)
		lettergrade = "C";
	else if (finalgrade >= 67)
		lettergrade = "D+";
	else if (finalgrade >= 63)
		lettergrade = "D";
	else if (finalgrade >= 60)
		lettergrade = "D-";
	else
		lettergrade = "F";

}


int _tmain(int argc, _TCHAR* argv[])
{
	
	//input
	cout << "Enter name:  ";
	cin >> first;
	

	grades();
	gradeResults();

	system("cls");
	cout << "Your overall grade is an";
	cout << lettergrade;
	
	
	system("pause");
	return 0;
}