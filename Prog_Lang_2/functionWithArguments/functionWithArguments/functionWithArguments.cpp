/*
THIS PROGRAM IS GOING TO HAVE ARGUMENTS WITH THE VOID FUNCTION
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;



void addThis(string person, int num1, int num2)
{
	//calc
	int sum;
	sum = num1 + num2;
	
	//display results
	cout << "Hey " << person << ", the sum of " << num1 << " and " << num2 << " is " << sum << ".\n";

}


int _tmain(int argc, _TCHAR* argv[])
{
	

	addThis("John", 10, 20);
	addThis("Mary", 5, 4);
	addThis("Julia", 7, 8);
	addThis("Joe", 9, 5);
	addThis("Mel", 100, 200);

	system("pause");
	return 0;
}

