#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "..\..\Class_HelperClass\Class_HelperClass\HelperBot.h"

using namespace std;

bool TryParse(string input, double& value);

int main()
{
	bool quit = false;

	//array size constant values
	const int kArrLength = 3;
	const int kArrHeight = 2;

	// dimension and assign values to the arrays
	int firstNumbers[kArrHeight][kArrLength] = {
		{10,20,30},
		{5,15,25}
	};

	int secondNumbers[kArrHeight][kArrLength] = {
		{3,6,9},
		{11,13,17}
	};

	int answers[kArrHeight][kArrLength] = {
		{0,0,0},
		{0,0,0}
	};

	while (!quit)
	{		
		//loop through all the arrays
		//display the first and secong number arrays
		//do the addition for the answers array
		//output and format all the values
		cout << "First" << endl << endl;

		for (int i =0; i < kArrHeight; i++)
		{
			for(int j = 0; j < kArrLength; j++)
			{
				cout << firstNumbers[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl << "Second" << endl << endl;

		for (int i =0; i < kArrHeight; i++)
		{
			for(int j = 0; j < kArrLength; j++)
			{				
				cout << secondNumbers[i][j] << " ";
			}
			cout << endl;
		}

		cout << endl << "The corresponding numbers in the 'First' and 'Second' grids added together" << endl << endl;

		for (int i =0; i < kArrHeight; i++)
		{
			for(int j = 0; j < kArrLength; j++)
			{
				answers[i][j] = firstNumbers[i][j] + secondNumbers[i][j];
								
				cout << answers[i][j] << " ";
			}
			cout << endl;
		}


		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}

	

	return 1;
}

//fuction to determine numeric value and convert to a double
bool TryParse(string input, double& value)
{
	bool success = HelperBot::IsNumeric(input);

	if(success)
	{
		value = HelperBot::ConvertToDouble(input);
	}
	

	return success;
}