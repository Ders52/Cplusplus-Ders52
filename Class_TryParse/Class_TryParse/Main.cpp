#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "..\..\Class_HelperClass\Class_HelperClass\HelperBot.h"

using namespace std;

bool TryParse(string, int&);

int main()
{
	bool quit = false;

	while (!quit)
	{
		cout << "Please enter a number: ";
		string user_input = "";
		int number = 0;
		cin >> user_input;

		if(TryParse(user_input, number))
		{
			cout << "You entered: " << number << endl;
		}
		else 
		{
			cout << endl << "That is not a number" << endl;
		}

		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}

	

	return 1;
}

bool TryParse(string input, int& value)
{
	bool success = HelperBot::IsNumeric(input);

	if(success)
	{
		value = HelperBot::ConvertToInt(input);
	}
	

	return success;
}