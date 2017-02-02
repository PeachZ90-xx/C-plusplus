/*Alan Trevino
Sept 30, 2013
This program will help you decide whether or not to get a loan.

define headers
declare variables
calculations
results
*/

#include <iostream>
#include <string>
using namespace std;

int main ()
{
	//variables
	string employed, recentGrad;
	
	//input
	cout<< "Please answer the following questions with a yes or a no.\n";
	cout<< "Make sure not to capitalize the first letter.\n";
	cout<< "Are you currently employed?\n";
	cin >> employed;
	cout<< "\nHave you graduated from college?\n";
	cin >> recentGrad;
	

	//statement
	//user said yes
	if(employed=="yes")
	if (recentGrad=="yes")
		{
		cout<< "\nCongrats! You qualify for a special interest loan!\n";
		cout<< "Your parents must be so proud of you.";
		}
		
		else
		
		{cout<< "\nOh! Terribly sorry, but you do not qualify for a loan.\n";
		cout<< "Try again next time.";}
	
	//if no all ovre the place
	if (employed == "no")	
	if (recentGrad == "no")	
	{cout<< "\nSorry, you're a broke ass bitch who can't afford shit!\n";
	cout<< "Get a job you waste of human space!";}
	
		if(employed=="no")
	if (recentGrad=="yes")
		{
		cout<< "\nCongrats! You qualify for a special interest loan!\n";
		cout<< "Your parents must be so proud of you.";
		}
	
	return 0;
}
