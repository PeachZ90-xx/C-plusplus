/*
This program will take in mass in Kilograms and velocity in meters-per-seconds and give us KINETIC ENERGY!!!!
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int kin_energy;

void ke(int mass, int velo);

int _tmain(int argc, _TCHAR* argv[])
{
	
	
	string name;
	
	cout << "Hello!\n";
	cout << "I am ready for some calculations! \nFirst, what is your name?\n";
	cin >> name;
	
	cout << "\n\nPerfect! Let's get down to business!\n\n";


	//input
	cout << "\nPlease follow the instructions for correct calculations.";
	cout << "\nTo figure out the kinetic energy of the object in question,\nI need two things.";
	cout << "\n1.) Mass in kilograms";
	cout << "\n2.) Velocity in meters per second.";

	cout << "\n\nPlease enter Mass in kilograms:\n";
	cin >> mass;

	cout << "\n\nPlease enter Velocity in meters per seconds:\n";
	cin >> velo;

	ke(mass, velo);


	system("pause");
	return 0;
}

void ke( mass, velo)
{
	//calculation
	kin_energy = 1 / 2 * (mass*(velo*velo));

	cout << "\n\n\n\n\nTo calculate for kinetic energy, we used the following:";
	cout << "\nKE = kinetic energy.";
	cout << "\nm = mass in kilograms.";
	cout << "\nv = velocity in meters per second.";
	cout << "\n\nKE=1/2xmv^2\n";

	system("pause");

	cout << "\nKinetic energy is " << kin_energy;
}