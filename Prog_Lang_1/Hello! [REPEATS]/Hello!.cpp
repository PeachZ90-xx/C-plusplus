//While hello

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void star_row()
{
	system("cls");
	int row, star;
	
	for (row = 0; row <= 20; row++)
	{
		for (star = 0; star < 30; star++)
		{
			if (star > 10)
				break;
			cout<< "*";
		}
	cout<< endl;
	}
}




int main()
{
	string choice1;
	int count = 10;
	
	while (count >= 5)
	{
		cout<< "Hello! ";
		Sleep(300);
		cout<< "count = " <<count <<endl;
//		count = count + 1;
		Sleep(300);
		count--;
		cout << count <<"\n\n";
	}
	cout<< "\nThat's all folks!\n";
	system("pause");
	system("cls");
	
	cout<< "Want to try something else?\n";
	cin>> choice1;
	
	if (choice1=="yes"||choice1=="Yes")
		star_row();
	
	return 0;
}
