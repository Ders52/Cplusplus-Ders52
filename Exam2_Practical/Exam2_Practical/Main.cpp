#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "..\..\Class_HelperClass\Class_HelperClass\HelperBot.h"

using namespace std;

//create functions to check for numeric value and get an average
double find_average(double, double, double);

bool TryParse(string input, double& value);

int main()
{
	
	bool quit = false;
	
	while (!quit)
	{
		//variables
		double num1 = 0;
		double num2 = 0;
		double num3 = 0;
		string input = "";
				
		//set answer to 1 decimal point
		cout << setprecision(1) << fixed;

		//ask for and get input for first number
		cout << "Please enter a number: ";
		
		cin >> input;

		//test if first input was a number
		//if first input was a number ask for and get the second number 
		//repeat process until all values are numeric and an average is given or program is ended
		if(TryParse(input, num1))
		{
			cout << endl << "Please enter a second number: ";

			cin >> input;
		
			if(TryParse(input, num2))
			{
				cout << endl << "Please enter a third number: ";

				cin >> input;

				if(TryParse(input, num3))
				{
					cout << endl << "The average of " << num1 << ", " << num2 << ",and " << num3 << " is: " << find_average(num1, num2, num3);

					cout << endl << "Please enter a number or 'q' to quit" << endl;
				}
				else
				{
					cout << "Please enter a valid number or 'q' to quit";

					cin >> input;

				}

			}
			else
			{
				cout << "Please enter a valid number or 'q' to quit";

				cin >> input;

			}
		}
		else 
		{
			cout << "Please enter a valid number or 'q' to quit";

			cin >> input;

		}
			
		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	
	return 1;
}
//function for the average
double find_average(double num1, double num2, double num3)
{
	double avg = (num1 + num2 + num3) / 3;

	return avg; 
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