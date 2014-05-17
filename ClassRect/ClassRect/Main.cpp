#include <iostream>
#include <conio.h>

#include "..\..\Class_HelperClass\Class_HelperClass\HelperBot.h"

using namespace std;

bool TryParse(string input, double& value);

int main()
{
	bool quit = false;

	while (!quit)
	{
		string input = "";
		double length = 0;
		double width = 0;

		cout << "Please enter a width and length" << endl;

		cout << "Length: ";
		cin >> input;

		if(TryParse(input, length))
		{
			cout << "Width: ";
			cin >> input;

			if(TryParse(input, width))
			{

			}
			
		}
		else
		{
			cout << "Please enter a valid number" << endl;
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