/*

======NAME=====
Alan Treviño
Built
Copyright

Built in:
Visual Studio 2013
Initial build on Feb 25, 2015 @ 15:20

Edits:
Feb 25, 2015 @ 23:37
Feb 26, 2015 @ 1:01
Feb 26, 2015 @ 21:32
Feb 28, 2015 @ 13:47


=====INFO=====
These programs are based off of Coding Exercise 3, which was assigned
on February 25, 2015.
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
using namespace std;

//declare variables
string Name;
char Choice;
bool Repeat;


//void programs. You will learn about these later.
//I am separating my programs so that y'all can get a
//clearer idea as to how these programs work without
//confusing yourself. =]

void program_1();
void program_2();
void program_3();

int _tmain(int argc, _TCHAR* argv[])
{
	
	//START!
	cout << "What is your name?\n";
	cin >> Name;
	
	Sleep(200);
	cout << "\nHello " << Name << "! I am a program that does a few neat\n";
	Sleep(100);
	cout << "things for you. ";
	Sleep(300);
	cout << "Let ";
	Sleep(300);
	cout << "us ";
	Sleep(300);
	cout << "begin";
	Sleep(200);
	cout << ". ";
	Sleep(200);
	cout << ". ";
	Sleep(200);
	cout << ". \n\n";
	Sleep(500);
	


	if (Repeat == 0)
	{
		//variable for switch(case)
		char mchoice;
		
		cout << setw(5) << "Hello \n" << setw(5) << "World!\n\n\n";
		Sleep(1000);

		//This is where you choose
		cout << "I have three functions for you to choose from.\n";
		Sleep(250);
		cout << setw(4) << "Program A -- " << setw(2) << "Tells you your fortune.\n";
		Sleep(250);
		cout << setw(4) << "Program B -- " << setw(2) << "Sells you a program.\n";
		Sleep(250);
		cout << setw(4) << "Program C -- " << setw(2) << "Does some math.\n";
		Sleep(500);
		cout << "Please make a choice (caps lock will not affect your answer).\n";
		cin >> mchoice;

		//switch(case)1
		switch (mchoice)
		{
			case 'a':
			case 'A': program_1();
					break;
			case 'b':
			case 'B': program_2();
				break;
			case 'c':
			case 'C': program_3();
				break;
			default:
				cout << "\n\n\n";
				cout << "       \/,---<                                           \n";
				cout << "       ( )a a(      YOU STOLE FIZZY LIFTING DRINKS!!!    \n";
				cout << "        C   >/                                           \n";
				cout << "         \ ~/      YOU GET NOTHING! YOU LOSE!            \n";
				cout << "       ,- >o<-.    GOOD DAY SIR!!!                       \n";
				cout << "      /   \/   \                                         \n";
				cout << "     / /|  | |\ \     _                                  \n";
				cout << "     \ \|  | | \ `---/_)                                 \n";
				cout << "      \_\_ | |  `----\_O-                                \n";
				cout << "      /_/____|                                           \n";
				cout << "        |  | |                                           \n";
				cout << "        |  | |                                           \n";
				cout << "        |  | |                                           \n";
				cout << "        |__|_|_                                          \n";
				cout << "        (____)_)                                         \n";
		}
			
		//this is the area after the switch(case).
		//we have choice = true so that the IF statement can skip this when it comes back around.
		Choice = true;

	}


	else
	{
		system("cls");
		cout << "Thank you " << Name << ", have a great day!\n\n";

	}

	system("pause");
	return 0;
}


//***************************************************************************************
//Program One
void program_1()
{
	/*
	This program tells you your fortune.

	I used if() else statements for this program.
	*/

	system("cls");
	//This is for the first program.
	cout << "***********\n";
	cout << "Program One\n";
	cout << "***********\n\n\n\n";
	Sleep(1000);

	//variables!
	int day;


	//This is where the program starts.
	cout << "This program determines your fortune based on the day of\n";
	cout << "the week you were born on.\n\n";
	Sleep(250);

	cout << "Please enter the day of the week you were born on " << Name << ".\n" 
		<< " (use 1 - 7 for days of the week. e.g.: 1=mon, 2=tues\n)";
	cin >> day;
	Sleep(1500);


	//results Made it a bit fun.
	if (day == 1)
	{
		cout << "\n\n\n";
		cout << "Children ";
		Sleep(200);
		cout << "of ";
		Sleep(400);
		cout << "Mondays a1111010101000101010101010100001010101010101010010101";
		system("cls");
		cout << "ERROR! Program sufffered fatal error! ER-00";
		Sleep(3000);
		//LOL
		cout << "\n\n\nKIDDING!";
		Sleep(250);
		cout << "Children of Mondays are fair of face.";
	}

	else if (day == 2)
	{
		cout << setw(6) << "Tuesday's child is full of grace\n";
	}

	else if (day == 3)
	{
		cout << setw(6) << "Wednesday child is full of death!\n";
		cout << setw(6) << "Kidding! You're full of love.\n";
	}

	else if (day == 4)
	{
		cout << setw(6) << "Thursday's child has far to go.\n";
	}

	else if (day == 5)
	{
		cout << setw(6) << "Friday's child is loving and giving.\n\n";
		Sleep(200);
		cout << "Now shut up and give me your money!!!";
	}

	else if (day == 6)
	{
		cout << setw(6) << "Saturday's child works hard for a living.\n";
	}

	else if (day == 7)
	{
		cout << setw(6) << "The child born on the Sabbath day is fair, wise, and good in every way.\n\n";
		Sleep(300);
		cout << "I was finished on the Sabbath day. I think I am doing pretty well for myself.";
	}

	else
	{
		cout << "You did not enter a day.\n";
		cout << "I cannot tell you your fortune.\n\n";
	}

	//This if-else statement is in every program.
	//It asks if they want to go again.
	cout << "Would you like to exit to the menu " << Name << "? (Y/n) \n";
	cin >> Choice;

	if (Choice == 'Y')
	{
		Repeat = 0;
	}

	else
	{
		Repeat = 1;
	}


	system("pause");
	system("cls");
}


//***************************************************************************************
//Program Two
void program_2()
{
	/*
	This program sells you something.

	I used if() else statements for this program.
	*/

	system("cls");
	//This is for the second program.
	cout << "***********\n";
	cout << "Program Two\n";
	cout << "***********\n\n\n\n";

	//declarations
	int ammount;
	double total, discount, new_price, disc_total, saved;


	cout << setw (2) << "This program is a Point-Of-Sale program.\n\n";
	Sleep(500);
	cout << "I sell a package that retails at $99. I can determine the total cost\n";
	cout << "of your sale." << Name << "\n\n";

	cout << "How many of the $99 surprize package do you want?\n";
	cout << "(NOTE: I don't know what the contents are. Don't ask)\n";
	cin >> ammount;

	//Time for fun

	if (ammount > 0 && ammount <= 9)
	{
		Sleep(300);
		cout << "\n\n\nCalculating";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ".\n\n\n";

		//math
		total = ammount * 99;

		//display
		cout << "I just finished " << Name << "\n";
		cout << "Your total is $" << setprecision(2) << total;
		cout << "\nI checked the contents. Nothing special. Just toilet paper.\n\n";
	}


	else if (ammount > 9 && ammount <= 19)
	{
		Sleep(300);
		cout << "\n\n\nCalculating";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ".\n\n\n";

		//math
		new_price = 99 * .20;
		total = ammount * new_price;

		//total saved.
		disc_total = ammount * 99;
		saved = total - disc_total;


		cout << "Congrats" << Name << "! You qualify for a 20% discount.\n";
		Sleep(300);
		cout << "Your total is $" << setprecision(2) << total << "\n";
		Sleep(300);
		cout << "You saved  $" << saved << "\n\n";

		cout << "Oops! I forgot to check the contents of the package. Oh well.\n\n";
	}

	else if (ammount > 19 && ammount <= 49)
	{
		Sleep(300);
		cout << "\n\n\nCalculating";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ".\n\n\n";

		//math
		new_price = 99 * .30;
		total = ammount * new_price;

		//total saved.
		disc_total = ammount * 99;
		saved = total - disc_total;


		cout << "Congrats" << Name << "! You qualify for a 30% discount.\n";
		Sleep(300);
		cout << "Your total is $" << setprecision(2) << total << "\n";
		Sleep(300);
		cout << "You saved  $" << saved << "\n\n";

		cout << "I checked the contents. It's tissue paper.\n\n";
	}

	else if (ammount > 49 && ammount <= 99)
	{
		Sleep(300);
		cout << "\n\n\nCalculating";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ".\n\n\n";

		//math
		new_price = 99 * .40;
		total = ammount * new_price;

		//total saved.
		disc_total = ammount * 99;
		saved = total - disc_total;


		cout << "Congrats" << Name << "! You qualify for a 40% discount.\n";
		Sleep(300);
		cout << "Your total is $" << setprecision(2) << total << "\n";
		Sleep(300);
		cout << "You saved  $" << saved << "\n\n";

		cout << "I checked the contents. Nothing special. Just tube socks.\n\n";

	}

	else if ( ammount > 99 )
	{
		Sleep(300);
		cout << "\n\n\nCalculating";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ".\n\n\n";

		//math
		new_price = 99 * .50;
		total = ammount * new_price;

		//total saved.
		disc_total = ammount * 99;
		saved = total - disc_total;


		cout << "Congrats" << Name << "! You qualify for a 50% discount.\n";
		Sleep(300);
		cout << "Your total is $" << setprecision(2) << total << "\n";
		Sleep(300);
		cout << "You saved  $" << saved << "\n\n";

		cout << "I checked the contents. Nothing special. Just tube socks.\n\n";
	}

	else
	{
		Sleep(500);
		cout << "Your entry is incorrect.\n";
	}



	//This if-else statement is in every program.
	//It asks if they want to go again.
	cout << "Would you like to exit to the menu " << Name << "? (Y/n) \n";
	cin >> Choice;

	if (Choice == 'Y')
	{
		Repeat = 0;
	}

	else
	{
		Repeat = 1;
	}

	system("pause");
	system("cls");
}


//***************************************************************************************
//Program Three 
void program_3()
{
	/*
	This program calcuylates the speed at which something moves in specific gasses.
	
	I used switch(case) for this part of the program.
	*/

	system("cls");
	//This is for the Third program.
	cout << "*************\n";
	cout << "Program Three\n";
	cout << "*************\n\n\n\n";

	//declarations
	int seconds, gas_select;
	char gas;
	double meters;
	const double car_dio = 258.0;
	const double air = 331.5;
	const double helium = 972.0;
	const double hydrogen = 1270.0;

	cout << "Hello " << Name << ". I am a scientific program that can calculate the "
		<<"\ndistance that sounds travel through gas.\n";
	cout << "There are four gases to choose from.\n";
	Sleep(250);
	cout << right << setw(2) << "Carbon Dioxide\n";
	Sleep(250); 
	cout << right << setw(2) << "Air\n";
	Sleep(250); 
	cout << right << setw(2) << "Helium\n";
	Sleep(250); 
	cout << right << setw(2) << "Hydrogen\n\n";
	Sleep(500);

	cout << "Please select a gas.(1 - 4)\n";
	cin >> gas_select;

	switch (gas_select)
	{
	case 1:
		//This is for Carbon Dioxide
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ".\n\n";

		//Need to get seconds
		cout << "You chose Carbon Dioxide\n";
		cout << "How many seconds did it take for the sound to go through\n";
		cin >> seconds;
		cout << "\nThank you\n\n";

		if (seconds > 0)
		{
			//math
			meters = car_dio * seconds ;
			
			cout << "The distance is " << meters << "m.\n";

		}
		
		else
		{
			cout << "You cannot give negative seconds!\n";
		}

		break;
	case 2:
		//This is for Air
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ".\n\n";

		//Need to get seconds
		cout << "You chose Air\n";
		cout << "How many seconds did it take for the sound to go through\n";
		cin >> seconds;
		cout << "\nThank you\n\n";

		if (seconds > 0)
		{
			//math
			meters = air * seconds;

			cout << "The distance is " << meters << "m.\n";

		}

		else
		{
			cout << "You cannot give negative seconds!\n";
		}

		break;
	case 3:
		//This is for Helium
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ".\n\n";

		//Need to get seconds
		cout << "You chose Helium\n";
		cout << "How many seconds did it take for the sound to go through\n";
		cin >> seconds;
		cout << "\nThank you\n\n";

		if (seconds > 0)
		{
			//math
			meters = helium * seconds;

			cout << "The distance is " << meters << "m.\n";

		}

		else
		{
			cout << "You cannot give negative seconds!\n";
		}

		break;
	case 4:
		//This is for Hydrogen
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ". ";
		Sleep(250);
		cout << ".\n\n";

		//Need to get seconds
		cout << "You chose Hydrogen\n";
		cout << "How many seconds did it take for the sound to go through\n";
		cin >> seconds;
		cout << "\nThank you\n\n";

		if (seconds > 0)
		{
			//math
			meters = hydrogen * seconds;

			cout << "The distance is " << meters << "m.\n";

		}

		else
		{
			cout << "You cannot give negative seconds!\n";
		}

		break;
	case 5:
		cout << "\nI SAID HEY! WHAT'S GOING ON!!!";
		break;
	default: cout << "\n\nI don't think I know that gas.";
	}


	//This if-else statement is in every program.
	//It asks if they want to go again.
	cout << "Would you like to exit to the menu " << Name << "? (Y/n) \n";
	cin >> Choice;

	if (Choice == 'Y')
	{
		Repeat = 0;
	}

	else
	{
		Repeat = 1;
	}

	system("pause");
	system("cls");
}

