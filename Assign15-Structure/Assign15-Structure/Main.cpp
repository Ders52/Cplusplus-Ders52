#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "..\..\Class_HelperClass\Class_HelperClass\HelperBot.h"
#include "..\..\Class_HelperClass\Class_HelperClass\Collection.h"

using namespace std;

bool TryParse(string input, double& value);

//employee struct
struct Employee
{
	string FirstName;
	string LastName;
	double hours;
	double rate;
};

int main()
{
	bool quit = false;

	while (!quit)
	{
		string numInputEmployess = "";
		int numEmployees = 0;
		cout << "Please enter how many employees there are (up to 10)" << endl;
		cin >> numInputEmployess;

		//get number of employess (no more than 10)
		if(HelperBot::IsNumericInt(numInputEmployess) && numEmployees < 11)
		{
			numEmployees = HelperBot::ConvertToInt(numInputEmployess);	

			//create a collection of employees
			Collection <Employee> employees;

			//get info for employess and add them to collection
			cout << "Please enter employee information: " << endl;

			for (int i = 0; i < numEmployees; i++)
			{
				Employee tempEmployee;
				string input = "";

				cout << "First Name: ";
				cin >> tempEmployee.FirstName;

				cout << "Last Name: ";
				cin >> tempEmployee.LastName;
								
				do
				{
					cout << "Pay Rate: ";
					cin >> input;
				}while(!TryParse(input, tempEmployee.rate));
				
				do
				{
					cout << "Hours Worked: ";
					cin >> input;
				}while(!TryParse(input, tempEmployee.hours));
								
			
				employees.Add(tempEmployee);

			}
		
			//display in a table all the employee info entered and their gross pay
			cout << endl << "First Name" << setw(10) << "Last Name" << setw(10) << "Rate" << setw(10) << "Hours" << setw(10) << "Gross Pay" << endl;

			for(int i = 0; i < employees.Length(); i++)
			{
				cout << setprecision(2) << fixed;
				cout << right << setw(10) << employees[i].FirstName << setw(10) << employees[i].LastName << setw(10) << employees[i].rate << setw(10) << 
				employees[i].hours << setw(10) << employees[i].rate * employees[i].hours << endl;
			}
		}
		else
		{
			cout << "Please enter a valid number of employees (up to 10)" << endl;
			cin >> numInputEmployess;
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