#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "..\..\Class_HelperClass\Class_HelperClass\HelperBot.h"

using namespace std;

bool TryParse(string, double&);
double Addition(double, double);
double Subtraction(double, double);
double Multiplication(double, double);
double Division(double, double);
double Average(double, double);

int main()
{
	//declare variables
	bool quit = false;

	string strnumber1 = "";
	string strnumber2 = "";

	double dblnumber1 = 0;
	double dblnumber2 = 0;

	double result = 0;

	int MathChoice = 0;

	//wait for key press to close app
	while (!quit)
	{
		//ask for user to enter two numbers
		cout << "Please enter two numbers to use for your math calculations" << endl << endl;
		cout << "First number: ";
		cin >> strnumber1;

		//check if input for first number is a number
		if(TryParse(strnumber1, dblnumber1))
		{
			cout << "Second number: ";
			cin >> strnumber2;

			//check if input for second number is a number
			if(TryParse(strnumber2, dblnumber2))
			{
				//ask for and get which math operation to perform
				cout << endl << "Please select which operation to perform on the numbers: " << endl << endl;

				cout << "1)Addition " << dblnumber1 << " + " << dblnumber2 << endl;
				cout << "2)Subtraction " << dblnumber1 << " - " << dblnumber2 << endl;
				cout << "3)Multiplication " << dblnumber1 << " x " << dblnumber2 << endl;
				cout << "4)Division " << dblnumber1 << " / " << dblnumber2 << endl;
				cout << "5)Average " << dblnumber1 << " + " << dblnumber2 << " / 2" << endl  << endl;

				cin >> MathChoice;

				//determine the operation to perform
				switch (MathChoice)
				{
				case 1:

					cout << endl << "Answer: " << Addition(dblnumber1, dblnumber2) << endl;

					break;

				case 2:

					cout << endl << "Answer: " << Subtraction(dblnumber1, dblnumber2) << endl;

					break;

				case 3:

					cout << endl << "Answer: " << Multiplication(dblnumber1, dblnumber2) << endl;

					break;
				
				case 4:

					if (dblnumber2 != 0)
					{
						cout << endl << "Answer: " << Division(dblnumber1, dblnumber2) << endl;
					}
					else
					{
						cout << endl << "Can't divide by 0" << endl;
					}
					

					break;

				case 5:

					if (dblnumber2 != 0)
					{
						cout << "Answer: " << endl << Average(dblnumber1, dblnumber2) << endl;
					}
					else
					{
						cout << endl << "Can't divide by 0" << endl;
					}

					
					
					break;

				default:

					cout << endl << "Please select a valid operation" << endl;


					break;
				}
			}
			else 
			{
				cout << endl << "Please enter a valid number" << endl;
			}
		}
		else 
		{
			cout << endl << "Please enter a valid number" << endl;
		}

		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}

	

	return 1;
}

//test if its a number
bool TryParse(string input, double& value)
{
	bool success = HelperBot::IsNumeric(input);

	if(success)
	{
		value = HelperBot::ConvertToDouble(input);
	}
	

	return success;
}

//operation functions
double Addition(double num1, double num2)
{
	double result = num1 + num2;
	
	return result;
}

double Subtraction(double num1, double num2)
{
	double result = num1 - num2;
	
	return result;
}

double Multiplication(double num1, double num2)
{
	double result = num1 * num2;
	
	return result;
}

double Division(double num1, double num2)
{
	double result = num1 / num2;
	
	return result;
}

double Average(double num1, double num2)
{
	double result = (num1 + num2) / 2;
	
	return result;
}