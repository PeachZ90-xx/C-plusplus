/*
	Alan Trevino
	9/9/13
	Excercise 1 chapter 2, pae 73
	This program sums 62 and 99 using variables.
	*/
	
#include <iostream>//for output
using namespace std;

int main()
{
	//declaration of Variables
	int num1, num2, //two numbers
	total; //sum of two numbers
	
	//assignment of Values
	num1 = 62;
	num2 = 99;
	
	//calculation
	total = num1 + num2;
	
	//print results
	cout<< "The total of " <<num1 <<" and of " <<num2 <<" is " <<total <<".\n";
	return 0;
}
