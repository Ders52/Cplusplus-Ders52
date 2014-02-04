#include "iostream"
#include "conio.h"
#include "iomanip"

using namespace std;

int main()
{
	//declare variables
	int int_num = 32;
	double dbl_num = 42.98765;

	//output variables and convert t hexadecimal and octal
	cout << "The hex of " << int_num << " is: " << hex << int_num << endl;
	cout << "The octal of " << dec << int_num << " is: " << oct << int_num << endl << endl;

	//output the double with with decimal place formatting and spacing
	cout << fixed << setprecision(3);
	cout << "|" << right << setw(10) << dbl_num << "|" << endl;

	cout << fixed << setprecision(4);
	cout << "|" << right << setw(10) << dbl_num << "|" << endl;
	
	cout << fixed << setprecision(5);
	cout << "|" << right << setw(10) << dbl_num << "|" << endl;

	cout << fixed << setprecision(6);
	cout << "|" << right << setw(10) << dbl_num << "|" << endl;

	//output the original numbers with decimal place formatting and spacing
	cout << fixed << setprecision(2) << endl;
	cout << "|" << right << setw(5) << dec << int_num << "|" << right << setw(10) << dbl_num << "|";

	//when the double is changed to a float the number loses precision after a certain number of decimal places

	_getch();
	return 1;
}