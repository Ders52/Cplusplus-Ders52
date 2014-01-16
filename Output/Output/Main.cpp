#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//declare a num variable
	int num = 28;

	//ask for a number
	cout << "Please enter a number" << endl;

	//get a number from input
	cin >> num;

	//display number inputted
	cout << "The number is: " << num << endl;

	cout << "\tthis is some text" << endl;

	//wait for key press to exit
	_getch();
	return 1;
}