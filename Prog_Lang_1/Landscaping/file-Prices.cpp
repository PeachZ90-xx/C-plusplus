/* This program writes to a file, in this case, called prices.txt
Alan Trevino
November 11, 2013

*/

#include <iostream>
#include <windows.h>
#include <iomanip>
#include <string>
#include <fstream> //handles file output
using namespace std;

//declare
char open_answer;
string treeCategory;
double price;

void prices_Open()
{
	ifstream inFile;						//defines an input file stream
	
	inFile.open("prices.txt");				//Opens the file to input from it
	
	cout<< "Reading data from the file.\n\n";
	Sleep(1000);
	cout << fixed << showpoint << setprecision(2);
	
	//the statemend above formats the value of the output for variable price
	
	inFile>> treeCategory >> price;			//reads the first two file values	
	cout<< treeCategory << " " << price << "\n";
	inFile>> treeCategory >> price;			//reads the next two file values
	cout<< treeCategory << " " << price << "\n";
	inFile>> treeCategory >> price;
	cout<< treeCategory << " " << price << "\n";
	
	inFile.close();
	cout<< "\n\n\nFin.";
	system("pause");
}


int main()
{
	
	/*outputFile name is two parts, "OUTPUT" and "FILE".
	"OUTPUT" can be anything you want, as long as "FILE" follows it, you should be fine.
	*/
	
	ofstream outputFile;				//define an output file stream
	outputFile.open("prices.txt");		//opens the file to output to it
	
	//a way to write both statemens is ofstream outputFile("prices.txt")
	
	cout<< "I am currently writting our tree prices to a file.\n";
	cout<< "The name of the file is 'prices.txt'\n\n\n\n";
	cout<< "Legal warnings:\n";
	cout<< "Upon tending files, these files are unsharable by law.\n";
	cout<< "Any distribution of this/these files is punishable \n";
	cout<< "to the fullest extent of the law.";
	Sleep(1000);
	
	outputFile << "Category 1: $" << 39.00 << "\n";
	outputFile << "Category 2: $" << 69.00 << "\n";
	outputFile << "Category 3: $" << 99.00 << "\n";
	outputFile << "Category 4: $" << 199.00 << "\n";
	outputFile.close();
	
	Sleep(1000);
	system ("cls");
	cout<< "Done.\n";
	system("pause");
	
	cout<< "Can't find the file?";
	Sleep(500);
	cout<< "\nWant me to open it for you?\n";
	cin>> open_answer;
	
	if(open_answer=='Y' || open_answer=='y')
		{
			prices_Open();
		}
		
		
	//END
	return 0;
}
