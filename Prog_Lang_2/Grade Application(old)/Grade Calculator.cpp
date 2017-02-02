/* This is a program that calculates grades

*/

#include <iostream>
#include <string>
#include <windows.h>


using namespace std;

string first, lettergrade;
int test1, test2, final, assign, proj;
float finalgrade;

int main(int argc, char** argv) 
{
	
	//input
	cout<< "Enter name:  ";
	cin>> first;

	cout<< "\n\nEnter Test 1 grade:  ";
	cin>> test1;
	
	cout<< "\n\nEnter Test 2 grade:  ";
	cin>> test2;
	
	cout<< "\n\nEnter Final exam grade:  ";
	cin>> final;
	
	cout<< "\n\nEnter assignments grade:  ";
	cin>> assign;
	
	cout<< "\n\nEnter project grade:  ";
	cin>> proj;
	
	//calculate
	finalgrade = (test1*.15) + (test2*.15) + (final*.2) + (assign*.2) + (proj*.3);
	
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

	system ("cls");
	cout<< "Your overall grade is an";
	system ("cls");
	cout<< ".";
	system ("cls");
	cout<< ".";
	system ("cls");
	cout<< ".";
	system ("cls");
	cout<< lettergrade;
	
	
	return 0;
}
