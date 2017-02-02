/* Alan Trevino
9/11/2013
This program will determine the basketball player's height, as well as convert it from inches to feet.
*/

//pseudocode
/*
1.assign 73 to height.
2.Divide height by 12 and assign to feet.
3. Find the remainder of height divided by 12
4. Print Results.
*/


#include <iostream>
#include <string> 
using namespace std;

int main()
{
	//Declare variables
	int height, feet, inches;
	string name;
	
	//input
	cout<< "Please enter your name...\n";
	cin>>name;
	cout<< "Please ener height in whole inches...\n";
	cin>>height;
	
	
	//calculate
	feet = height/12;
	inches = height%12;
	
	//print results
	cout << name <<"\'s height is " << height << " inches tall," <<endl;
	cout << "which is also " << feet  << "\' " <<inches <<"\" tall.";

	return 0;
}
