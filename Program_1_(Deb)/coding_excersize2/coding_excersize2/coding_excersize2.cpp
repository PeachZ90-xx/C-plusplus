/*
coding_excersize2.cpp
This is an in class exercise answer sheet.

Created by Alan Trevino De Arcos on 2/12/15.
Copyright (c) 2015 Alan Trevino. All rights reserved

Edit:
2/13/15
2/14/15
2/15/15

This app was written using Microsoft Visual Studio Pro.
*/


#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h>
#include <windows.h>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{

	cout << "===========================\n";
	cout << "          Part             \n";
	cout << "          One              \n";
	cout << "===========================\n\n\n\n";

	//declare and assign
	double r, R, Pi, volume;
	Pi = 3.1415;
	r = 4;
	R = 6;

	//problem
	volume = (2 * ((pow(Pi, 2) * R * (pow(r, 2)))));

	//display
	cout << "The Volume of the torus is " << volume << "\n\n";
	

	//finished
	system("Pause");
	system("cls");
	
	cout << "===========================\n";
	cout << "          Part             \n";
	cout << "          Two              \n";
	cout << "===========================\n\n\n\n";


	//more notes. Much fun. Operator Magik
	cout << "X += 10; \n";

	cout << "total += tax; \n";

	cout << "inv -= shrinkage; \n";

	cout << "num %= 6; \n\n";


	//finished
	system("Pause");
	system("cls");

	cout << "===========================\n";
	cout << "          Part             \n";
	cout << "          Three            \n";
	cout << "===========================\n\n\n\n";

	//declare
	double dollars1, dollars2;

	//Questions and stuff
	cout << "How many dollars do you want to convert to Euros?\n";
	cin >> dollars1;
	// getline does not work with numbers. Shame.
	cout << "How many dollars do you want to convert to Yen?\n";
	cin >> dollars2;

	//math problems
	dollars1 /= 0.88;
	dollars2 /= 118.74;

	//Display
	cout << "\n\n\nIn Euros, you will get " << fixed << showpoint << setprecision(2) << dollars1 << ". in Euros\n";
	cout << "In ¥en, you will get " << fixed << showpoint << setprecision(2) << dollars2 << " in Yen.\n\n\n";

	//finished
	system("Pause");
	system("cls");

	cout << "===========================\n";
	cout << "          Part             \n";
	cout << "          Four             \n";
	cout << "===========================\n\n\n\n";

	//declarar
	double cels, fahr, c_convert, f_convert;

	//preguntas
	cout << "What is the Fahrenheit temperature\n";
	cin >> fahr;

	cout << "\nWhat is the Celsius temperature?\n";
	cin >> cels;

	//hacer las problemas
	f_convert = (((9 * cels) / 5) + 32);
	c_convert = (((fahr - 32) * 5) / 9);

	//enseñar el trabajo
	cout << "\n\n" << fahr << "º F converted to Celsius is " << c_convert << "º C.\n";
	cout << cels << "º C converted to Fahrenheit is " << f_convert << "º F.\n\n\n";

	//finished
	system("Pause");
	system("cls");

	cout << "===========================\n";
	cout << "          Part             \n";
	cout << "          Five             \n";
	cout << "===========================\n\n\n\n";


	//Random Number Gen
	unsigned seed;
	seed=time(0);
	srand(seed);
	
	//declare and assign
	int user_ans, real_ans, num1, num2;
	num1 = rand() % 100 + 1;
	num2 = rand() % 100 + 1;

	//Quiz
	cout << "What is the answer to the following equation?\n";
	cout << num1 << " + " << num2 << "\n";
	cin >> user_ans;
	
	//answer
	real_ans = num1 + num2;

	//results
	cout << "\n\n" << "Your answer was " << user_ans;
	cout << "\n" << "The answer was " << real_ans << "\n\n";

	//finished
	system("Pause");
	system("cls");

	cout << "===========================\n";
	cout << "          Part             \n";
	cout << "          Six              \n";
	cout << "===========================\n\n\n\n";

	//Random Number Gen along with dleclarations
	//unsigned seed;
	//seed = time(0);
	//srand(seed);
	//because I have already declared a seed, this does not need to be done twice.
	int number1, number2, num3, num4, num5, num6, lucky;

	number1 = rand() % 100 + 1;
	number2 = rand() % 100 + 1;
	num3 = rand() % 100 + 1;
	num4 = rand() % 100 + 1;
	num5 = rand() % 100 + 1;
	num6 = rand() % 100 + 1;
	lucky = rand() % 100 + 1;

	cout << number1 << " " << number2 << " " << num3 << " " << num4 << " " << num5 << " " << num6;
	cout << "\n" << "Lucky Number " << lucky << "\n\n";
	
	
	system("Pause");
	//===========================
	// No, I didn't do the extra
	// credit. Oh well. =]
	//===========================

	return 0;
}

