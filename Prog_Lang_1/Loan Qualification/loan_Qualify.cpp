/* Alan Trevino
Oct 2, 2013

This program will ask user basic loan qualifying questions
and determine whether yes or no.
*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	//declare variables
	double salary, time;
	string name, employed;
	char choice;
	
	//user input
	cout<< "Good after noon. I hope you are having a wonderful day.\n\nWhat is your name?\n";
	cin>> name;
	Sleep (500);
	cout<< "\nI hope I don't get too personal, but\n";
	cout<< "how much do you make in a year " <<name <<"?\n";
	cin>> salary;
	Sleep (500);
	
	cout<< ".";
	Sleep (300);
	cout<< ".";
	Sleep (300);
	cout<< ".";
	Sleep (500);
	
	system ("cls");
	
	//immediate kick
	if (salary < 20000)
	{cout << "\nSorry " <<name <<", based on your salary  you do NOT qualify for a loan.";
	cout<< "\nPlease try again later.";
	Sleep (500);
	return 0;}
	
	//input
	cout<< "\nPerfect! Thank you for that information " << name <<".";
	Sleep (500);
	cout<< "\nNow, I will need a little more information from you.\n";
	cout<< "Are you currently employed " << name <<"?\n";
	cin>> employed;
	Sleep (500);
	
	cout<< "\n.";
	Sleep (300);
	cout<< ".";
	Sleep (300);
	cout<< ".";
	Sleep (500);
	
	system ("cls");
	
	//immediate kick
	if (employed=="no")
	{cout << "\nSorry " <<name << ", based on your employment status you do not qualify for a loan.";
	cout<<"\nPlease try again later.";
	Sleep (500);
	return 0;}
	
	//last input
	cout<< "\nI have one more question for you " <<name <<", how long have you been employed?";
	Sleep (300);
	cout<< "\nPlease make sure to write this number down in years.";
	Sleep (300);
	cout<< "\nIf less than a year, convert to decimal point.\n";
	cin>> time;
	Sleep (500);
	
	cout<< "\n.";
	Sleep (300);
	cout<< ".";
	Sleep (300);
	cout<< ".";
	Sleep (500);
	
	system ("cls");
	
	//immediate kick
	if (time<1)
	{cout<< "\nSorry " << name <<", based on the time you have been working, \nyou do not qualify for a loan.";
	cout<< "\nPlease try again later.";
	Sleep (500);
	return 0;}
	
	//wait . . . 
	cout<< "\nAlright.";
	Sleep (300);
	cout<< " Give me a second to calculate everything. ";
	Sleep (500);
	
	cout<< "\n.";
	Sleep (1000);
	cout<< ".";
	Sleep (1000);
	cout<< ".";
	Sleep (1000);
	
	system ("cls");
	
	//total results
	
	//range is 20k - 35k and 1-5 years 
	if (salary>=20000 && salary<35000 && time>1 || time<5)
	{
		cout<< "Congrats!\n";
		Sleep (500);
		cout<< "\nYou qualify for two types of loans.\n";
		Sleep (1000);
		cout<< "Loan A has a total of $2,500.00 with a \n";
		cout<< "time frame of 36 months and an APR of 7.45%.\n";
		Sleep (1000);
		cout<< "\nLoan B has a total of $5,000.00 loan with a \n";
		cout<< "time frame of 36 months and an APR of 7.75%.\n";
		Sleep (500);
	
	//choice
		cout<< "\nPlease choose either Loan A or Loan B.\n";
		cout<< "Only use the identifying letter for the loan in caps.\n";
		cin>> choice;
	
		cout<< "\n.";
		Sleep (1000);
		cout<< ".";
		Sleep (1000);
		cout<< ".";
		Sleep (1000);
		
		system("cls");
		
		//final results
		switch(choice)
		{
			case 'A' :cout<< "\n\nYou have selected Loan A with a total of $2,500.00\n and a 7.45% APR for 36 months.";
						break;
			case 'B' :cout<< "\n\nYou have selected Loan B with a total of $5,000.00\n and a 7.75% APR for 36 months.";
						break;
			default:  cout<< "\nYou have made an invalid selection. Please try again.\n\n";
		}
	
	}
	
	//range is 35K-55k and unlimited years
	if (salary>35000 && salary<60000 && salary!=35000 && salary!=60000)
	{
		cout<< "Congrats!\n";
		Sleep (500);
		cout<< "\nYou qualify for three types of loans.\n";
		Sleep (1000);
		cout<< "Loan A has a total of $10,000.00 with a \n";
		cout<< "time frame of 36 months and an APR of 6.15%.\n";
		Sleep (1000);
		cout<< "\nLoan B has a total of $15,000.00 loan with a \n";
		cout<< "time frame of 36 months and an APR of 6.45%.\n";
		Sleep (1000);
		cout<< "\nLoan C has a total of $20,000.00 loan with a \n";
		cout<< "time frame of 36 months and an APR of 6.75%.\n";
		Sleep (500);
		
		//choice
		cout<< "\nPlease choose either Loan A, Loan B, or Loan C.\n";
		cout<< "Only use the identifying letter for the loan in caps.\n";
		cin>> choice;
	
		cout<< "\n.";
		Sleep (1000);
		cout<< ".";
		Sleep (1000);
		cout<< ".";
		Sleep (1000);
		
		system("cls");
		
		//final results
		switch(choice)
		{
			case 'A' :cout<< "\n\nYou have selected Loan A with a total of $10,000.00\n and a 6.15% APR for 36 months.";
						break;
			case 'B' :cout<< "\n\nYou have selected Loan B with a total of $15,000.00\n and a 6.45% APR for 36 months.";
						break;
			case 'C' :cout<< "\n\nYou have selected Loan C with a total of $20,000.00\n and a 6.75% APR for 36 months.";
						break;
			default: cout<< "\nYou have made an invalid selection. Please try again.\n";
		}
	}

	//range is 60k-105k with unlimited time frame
	if (salary>60000 && salary<=105000 && salary!=60000)
	{
		cout<< "Congrats!\n";
		Sleep (500);
		cout<< "\nYou qualify for four types of loans.\n";
		Sleep (1000);
		cout<< "Loan A has a total of $20,000.00 with a \n";
		cout<< "time frame of 36 months and an APR of 5.05%.\n";
		Sleep (1100);
		cout<< "\nLoan B has a total of $25,000.00 loan with a \n";
		cout<< "time frame of 36 months and an APR of 5.25%.\n";
		Sleep (1100);
		cout<< "\nLoan C has a total of $30,000.00 loan with a \n";
		cout<< "time frame of 36 months and an APR of 5.55%.\n";
		Sleep (1100);
		cout<< "\nLoan D has a total of $40,000.00 loan with a \n";
		cout<< "time frame of 36 months and an APR of 5.75%.\n";
		Sleep (500);
		
		//choice
		cout<< "\nPlease choose either Loan A, Loan B, Loan C, or Loan D.\n";
		cout<< "Only use the identifying letter for the loan in caps.\n";
		cin>> choice;
	
		cout<< "\n.";
		Sleep (1000);
		cout<< ".";
		Sleep (1000);
		cout<< ".";
		Sleep (1000);
		
		system("cls");
		
		//final results
		switch(choice)
		{
			case 'A':cout<< "\n\nYou have selected Loan A with a total of $20,000.00\n with an APR of 5.05% for 36 months.";
						break;
			case 'B':cout<< "\n\nYou have selected Loan B with a total of $25,000.00\n with an APR of 5.25% for 36 months.";
						break;
			case 'C':cout<< "\n\nYou have selected Loan C with a total of $30,000.00\n with an APR of 5.55% for 36 months.";
						break;
			case 'D':cout<< "\n\nYou have selected Loan D with a total of $40,000.00\n with an APR of 5.75% for 36 months.";
						break;
			default: cout<< "\nYou have made an invalid selection. Please try again.\n";
		}
	}
	
	cout<< "\n\nWe appreciate your business with us! Have an excellent day!";
	return 0;
}
