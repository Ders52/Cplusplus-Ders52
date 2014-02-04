#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	double tempFar;
	double tempCels;

	//ask for input
	cout << "Please enter a temperature in Celsius: ";

	//get input for starting temp
	cin >> tempCels;

	//convert input to farenheit
	tempFar = 1.8 * tempCels + 32;

	//set number of decimal places
	cout << fixed << setprecision(2);

	//display converted temp
	cout << endl << tempCels << " degrees Celsius converted into Farenheit is: " << tempFar;
	

	_getch();
	return 1;
}