#include <iostream>
using namespace std;

int main()
{
//identify
double ctemp, ftemp;

//input
cout<< "Please input the temperature in Celcius: \n";
cin>>ctemp;
	
//calculate
ftemp = ((ctemp*9.0)/5.0)+32.0;
	
//display solution
cout<< "The tempature in Farenheit is " <<ftemp <<" F. \n";
return 0;
}
