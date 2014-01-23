#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double firstnum = 106.54, secondnum = 89.532, thirdnum = 98.76, total = 0, average = 0;

	total = firstnum + secondnum + thirdnum;
	average = total / 3;

	cout << setprecision(4) << fixed;

	cout << "The total is = " << total << endl;

	_getch();
	return 1;
}