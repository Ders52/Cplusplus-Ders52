#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double tempFar;
	double tempCels;

	cout << "Please enter a temperature in Celsius: ";

	cin >> tempCels;

	tempFar = 1.8 * tempCels + 32;

	cout << fixed << setprecision(2);

	cout << endl << tempCels << " degrees Celsius converted into Farenheit is: " << tempFar;




	_getch();
	return 1;
}