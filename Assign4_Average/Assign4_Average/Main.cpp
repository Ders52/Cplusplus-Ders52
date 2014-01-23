#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare all variables as doubles
	double firstnum = 106.54, secondnum = 89.532, thirdnum = 98.76, total = 0, average = 0;

	//do the math for the total and average 
	total = firstnum + secondnum + thirdnum;
	average = total / 3;

	//output each number, the total, and the average
	cout << "The first number = " << firstnum << endl;
	cout << "The second number = " << secondnum << endl;
	cout << "The third number = " << thirdnum << endl;

	//set the amount of decimal places to 4
	cout << setprecision(4) << fixed;

	cout << "The total of the numbers = " << total << endl;

	//set the amount of decimal places to 1
	cout << setprecision(1) << fixed;

	cout << "The average of the numbers = " << average << endl;

	//wait for key press to close program
	_getch();
	return 1;
}