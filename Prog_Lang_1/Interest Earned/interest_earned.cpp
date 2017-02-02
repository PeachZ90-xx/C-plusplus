/* Alan Trevino
Started Sept 25, 2013
Edited on Sept. 30, 2013
This program determines the total interest earned throughout the year.
*/

#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	//declare
	double rate, amount, principal, t;
	string user;
	
	//assign and input
	cout<< "What is your name?\n";
	cin>> user;
	user = "Tony Stark";
	cout<< "\nI'm going to call you " << user <<".";
	cout<< "\nWhat is the principal of your interest account " << user <<"? \n";
	cin>> principal;
	cout<< "\nWhat is your interest rate " << user <<"? \n";
	cout<< "Please convert from precentage to decimal point. \n";
	cin>> rate;
	cout<< "\n" << user <<", what is the time period of your interest rate?\n";
	cin>> t;
	
	//calculate
	amount = principal * pow(1+rate/t,t);
	
	//separate results
		
	if (amount<0){
	cout << "\nIf you think you're not screwed yet, you got another thing coming to ya. \n" << "Literally.";}
	
	if (amount>0){
	cout<< "\nYour total earnings as of today are $" << amount << ".\n";
	cout<<"Your total interest earned is $" << amount - principal <<". \n";}

	if (amount>=50000)
	{cout<< "Congradulations! You are making money even when you are not making money. Haha!";}
	
	if (amount>1000000){
	cout << "\nSweet Baby Jesus! You are definitely making more than I am!!! \n";
	cout << "Congradulations! You are paying my loans!";}
	
	return 0;
}
