#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//output and align the text in two columns using spaces and tabs
	cout << "Part No.\t " << "  Price" << endl;
	cout << "T1267\t\t   " << "$6.34 " << endl;
	cout << "T1300\t\t   " << "$8.92 " << endl;
	cout << "T2401\t\t  " << "$65.40 " <<endl;
	cout << "T4482\t\t " << "$103.45 " << endl;

	//wait for key press to close
	_getch();
	return 1;
}