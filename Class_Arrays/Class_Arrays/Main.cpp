#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "..\..\Class_HelperClass\Class_HelperClass\HelperBot.h"

using namespace std;

bool TryParse(string input, double& value);

int main()
{

	const int kNumbersLength = 5;
	int numbers[kNumbersLength][kNumbersLength];
	string firstNames[] = {"rick", "jeff", "matt"};
	string lastNames[][3] = {
		{"thompson", "smith", "roberts"},
		{"jackson", "mcdonald", "skywalker"},
		{"weber", "callahan", "schultz"}
	};


	int num = 99;

	//int* numPointer = &numbers[0];

	numbers[0][0] = 5;
	numbers[0][1] = 7;
	numbers[0][2] = 1;
	numbers[0][3] = 2;
	numbers[0][4] = 3;

	//inititalize the array
	for (int i = 0; i < kNumbersLength; i++)
	{
		for (int j = 0; j < kNumbersLength; j++)
		{
			numbers[i][j] = i * j;
		}
	}
	

	bool quit = false;

	while (!quit)
	{
		for (int i = 0; i < kNumbersLength; i++)
		{
			for (int j = 0; j < kNumbersLength; j++)
			{
				cout << numbers[i][j] << " ";
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