#include "iostream"
#include "conio.h"
#include "iomanip"

using namespace std;

int main()
{
	//declare variables
	const double _regWage = 8.00;
	const double _overTimeWage = 12.00;

	double hours = 0;
	double overTimeHours = 0;
	double salary = 0;

	bool quit = false;

	//loop until user presses 'q' to quit 
	while (quit == false)
	{
		//ask for and get number of hours worked
		cout << "Please enter how many hours you worked" << endl;
		cin >> hours;		

		//test for number of hours worked to determine salary or ask for a valid number of hours
		if (hours <= 0)
		{
			cout << "Please enter how many hours you worked" << endl;
			cin >> hours;	
		}
		else if (hours > 0 && hours <= 40)
		{
			salary = hours * _regWage;
		}
		else if (hours > 40)
		{
			overTimeHours = hours - 40;
			salary = (40 * _regWage) + (overTimeHours * _overTimeWage);
		}
		
		//display calculated salary and hours
		cout << "Your salary is: $" << salary << endl;
		cout << "You worked: " << hours << " hours" << endl;
		cout << "You worked: " << overTimeHours << " overtime hours" << endl;

		//control structure code
		cout << "Press any key to continue, 'q' to quit" << endl;
		char charQuit = _getch();

		if (charQuit == 'q' || charQuit == 'Q')
		{
			quit = true;
		}

	}
		
	return 1;
}