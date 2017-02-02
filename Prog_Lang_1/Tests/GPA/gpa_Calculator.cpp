/*Alan Trevino
October 30, 2013
Programming Language I

This is a program that will ask for the following:
Name
Classification
Course name
&
total hours

This program should display the following:

GPA
course quality points
total quality points
&
total hours
*/

#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>
using namespace std;

//VARIABLES
string course, name, first, correction;
char grade1;
double course_QP1, total_QP, gpa;
int total_hours, hour, classes;




//************ONE CLASS
void one()
{
	
	system("cls");
	cout<< "How many hours have you taken?\n";
	cin>>  total_hours;
	
	Sleep(300);
	cout<< "\n.";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	cout<< ".\n\n";
	Sleep(300);
	
	while (grade1!='A'&&grade1!='B'&&grade1!='C'&&grade1!='D'&&grade1!='F')
	{
		cout<< "Alright, and what was your grade in the class?\n" <<"Please input your letter grade. Thank you!\n";
		cin>> grade1;
		
		
		Sleep(300);
		cout<< "\n.";
		Sleep(300);
		cout<< ".";
		Sleep(300);
		cout<< ".\n";
		Sleep(300);
		
		switch(grade1)
		{
			case 'A' : course_QP1=4.0;
				break;
			case 'B' : course_QP1=3.0;
				break;
			case 'C' : course_QP1=2.0;
				break;
			case 'D' : course_QP1=1.0;
				break;
			case 'F' : course_QP1=0.0;
				break;
			default  : cout<< "\n\nNope, you have to tell me what your grade was. No one is judging.\n\n\n";
		}
	}
	
	cout<< "\nHow many hours was the class worth?\n";
	cin>> hour;
	
	Sleep(300);
	cout<< "\n.";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	//calculate
	total_QP=hour*course_QP1;
	total_QP=total_QP+course_QP1;
	total_hours=total_hours+hour;
	gpa=total_QP/total_hours;
	Sleep(300);
	cout<< ".";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	system("cls");
	
	//******************Results
	cout<< "Here are your results!!!!!\n\n\n";
	Sleep(500);
	cout<< "Course Quality Points...";
	Sleep(200);
	cout<<course_QP1;
	Sleep(500);
	cout<< "\nTotal Quality Points...";
	Sleep(200);
	cout<<total_QP;
	Sleep(500);
	cout<< "\nTotal Hours...";
	Sleep(200);
	cout<<total_hours;
	Sleep(700);
	cout<< "\nAnd finally, your GPA is";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	cout<<gpa;
	
}


//************TWO CLASSES || HADUOKEN
void second()
{
	system ("cls");
	cout<< "Sorry! I cannot count past one.\n";
	cout<< "Sweet baby Jesus! The Jolly Roger leaves without me!!!";
}


//************THREE CLASSES || HADUOKEN
void three()
{
	system ("cls");
	cout<< "Wait,";
	Sleep(500);
	cout<< " there are more numbers than one!?\n";
	Sleep(500);
	cout<< "Back to the drawing board.\n";
	Sleep(500);
	cout<< "Tootles!";
}



//*************FOUR CLASSES || HADUOKEN
void four()
{
	system ("cls");
	cout<< "Sorry, I have ADHD. What we talking about again?\n";
	Sleep(500);
	cout<< "Wait, I remember.\n";
	Sleep(500);
	cout<< "This is the part that I ask for your grades and stuff.\n";
	Sleep(500);
	cout<< "But I don't feel like it";
	Sleep(300);
    cout<< ".";
    Sleep(300);
    cout<< ".";
    Sleep(300);
    cout<< ".\n";
    Sleep(300);
	cout<< "Tally Ho!";
}






int main()
{
	//intro
	
	cout<< "Hello there! I hope you are having a \n";
	Sleep(300);
    cout<< ".";
    Sleep(300);
    cout<< ".";
    Sleep(300);
    cout<< ".\n";
    Sleep(300);
    
	
	cout<< "Oh my! ";
	Sleep(300);
	cout<< "I don't even know your name!\n";
	Sleep (500);
	cout<< "May I have the pleasure of knowing your name?\n";
   	cin>> name;
  	cout<<"\nSo, it is " <<name;
	Sleep(300);
	cout<< ".";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	cout<< ".";
	Sleep(300);
	
	
			
	//selection
	while(classes!=1||classes!=2||classes!=3||classes!=4)
	{
		cout<< "\nNow, time to do what I was programed to do.\n";
		cout<< "Time to be a ballroom dancer!!! I mean";
		Sleep(300);
		cout<< ".";
		Sleep(300);
		cout<< ".";
		Sleep(300);
		cout<< ".\n";
		Sleep(300);
		cout<<"\nIt's time to calculate your grade! I do have a very important question for you\n";
		cout<<"How many classes did you take this past semester " << name <<"?\n";
		cin>> classes;
		
	}
		switch(classes)
		{
			case 1 : one();
				break;
			case 2 : second();
				break;
			case 3 : three();
				break;
			case 4 : four();
				break;
			default: cout<< "\nDon't be coy!";
		}
	
		
	//end
	return 0;
}

