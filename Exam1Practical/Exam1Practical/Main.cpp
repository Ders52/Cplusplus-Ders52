#include "iostream"
#include "conio.h"
#include "iomanip"

using namespace std;

int main()
{
	//declare variables
	double miles_driven = 0;
	double gallons_used = 0;
	double mpg = 0;

	//ask for and get how many miles driven 
	cout << "Enter the miles driven: ";
	cin >> miles_driven;

	//ask for and get how many gallons of gas used
	cout << endl << "Enter the gallons of gas used: ";
	cin >> gallons_used;

	//calculate miles per gallon
	mpg = miles_driven / gallons_used;

	//set number of decimal places for miles per gallon
	cout << fixed << setprecision(1);

	//output miles per gallon
	cout << endl << "Miles per gallon = " << mpg;


	//wiat for key press to exit
	_getch();
	return 1;
}