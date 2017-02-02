/* 
Function COUT
*/


#include <iostream>
#include <windows.h>
using namespace std;


void hi_yall()
{
	cout<< "Welcome to my world!\n";
}


void internal()
{
	cout<< "Welcome to internal!\n";
	Sleep(500);
	cout<< "You won't see this again.\n";
}


void external()
{
	cout<< "Welcome to external!\n";
	Sleep(500);
	cout<< "You don't belong here. Immediate Haduoken!!!!\n";
}


void confused()
{
	cout<< "Confused yet?\n";
	Sleep(700);
	cout<< "I'm sure you're smart enough to know that\n";
	Sleep(500);
	cout<< "we have you jumping from place to place.\n";
}


int main() 
{
	cout<< "I say Main.\n";
	Sleep (1000);
	hi_yall();
	Sleep (1000);
	cout<< "Leaving Main!\n";
	Sleep(1000);
	internal();
	Sleep(1000);
	confused();
	Sleep(1000);
	external();
	Sleep(1000);
	cout<< "That's all folks!!!\n\n";
	
	cout<< "Want to do that again?\n";	Sleep(2000);
	cout<< "TOO BAD! GO HOME GLEN COCO!!!\n\n";
	Sleep(100);
	
	return 0;
}
