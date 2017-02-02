// netpay_calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


float calcTax(int vPay, float vRate)
{	
	//good academic programming
	
	float calcValue;			//declare   "INPUT
	calcValue = vPay*vRate;		//calculate "PROCESS"
	return calcValue;			//Return	"OUTPUT" 
								//also known as IPO
}

int _tmain(int argc, _TCHAR* argv[])
{
	//VARIABLES
	string name;
	int years;
	double gross, fed, ss, medi, total, deduction, loyalty, loyal, bitch, bitch2;
	/*
	loyalty is for the ammount between 5 years to 20.
	loyal is for anyone who has been there past 20 years.
	bitch is the total of loyalty bonus that is added after 20 years.
	bitch2 is the after loyalty & bitch are added.
	*/

	/*
	FED = .08
	SS = .06
	MEDI = .04
	*/
	
	//User inputs
	cout << "Hello, what is your name?\n";
	cin >> name;

	cout << "\nHello " << name << ", what is your Gross Pay?\n";
	cin >> gross;

	cout << "\nHow many years do you have of Service?\n";
	cin >> years;

	cout << "Great! " << name << ", let me calculate everything\n";
	
	//calculate
	fed = gross*.08;
	ss = gross*.06;
	medi = gross*.04;
	deduction = fed + ss + medi;
	total = gross - deduction;


	if (years>5 && years<10)
	{
		//declare
		loyalty = 50.00;
		
		//results
		cout << "\nYour deductions are as followed.";
		cout << "\nFederal Tax (8%) was $" << fed;
		cout << "\nSocial Security (6%) was $" << ss;
		cout << "\nMedicare (4%) was $" << medi;
		cout << "\nTotal deductions was $" << deduction;
		cout << "\n\nYour earnings after deductions is $" << total;
		cout << "\nPlus your Loyalty of $" << loyalty << "\n";

	}

	else if (years>10 && years<20)
	{
		//declare
		loyalty = 100.00;

		//results
		cout << "\nYour deductions are as followed.";
		cout << "\nFederal Tax (8%) was $" << fed;
		cout << "\nSocial Security (6%) was $" << ss;
		cout << "\nMedicare (4%) was $" << medi;
		cout << "\nTotal deductions was $" << deduction;
		cout << "\n\nYour earnings after deductions is $" << total;
		cout << "\nPlus your Loyalty of $" << loyalty << "\n";

	}

	else if (years>20)
	{
		//declare & calculate
		double total2;
		loyalty = 200.00;
		loyal = years - 20;
		bitch=loyal*50.00;
		bitch2 = bitch + loyalty;
		total2 = loyalty + total + bitch2;

		//results
		cout << "\nYour deductions are as followed.";
		cout << "\nFederal Tax (8%) was $" << fed;
		cout << "\nSocial Security (6%) was $" << ss;
		cout << "\nMedicare (4%) was $" << medi;
		cout << "\nTotal deductions was $" << deduction;
		cout << "\n\nYour earnings after deductions is $" << total;
		cout << "\nLet's not forget your Loyalty of $" << loyalty; 
		cout << "\nPlus $50.00 for every year after 20 years which gives you $" << bitch2 << "\n";
		cout << "\n\nWith all of that added together, you get a grand total of $" <<total2 <<"\n";

	}

	//REULTS UNDER 5 YEARS
	if
		(years < 5)
	{
		cout << "\nYour deductions are as followed.";
		cout << "\nFederal Tax (8%) was $" << fed;
		cout << "\nSocial Security (6%) was $" << ss;
		cout << "\nMedicare (4%) was $" << medi;
		cout << "\nTotal deductions was $" << deduction;
		cout << "\n\nYour earnings after deductions is $" << total << "\n";
	}

	system("pause");
	
	return 0;
}

