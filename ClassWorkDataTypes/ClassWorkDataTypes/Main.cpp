#include <conio.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num = 0;
	int num2 = 27;
	bool success = true;
	double miles = 0;
	string hello = "hi there";
	char c = 'c';

	cin >> num;
	cin >> miles;

	cout << "num = " << num << endl; 
	cout << "success = " << success << endl;
	cout << "miles = " << miles << endl; 
	cout << hello << endl;
	cout << "c = " << c << endl;
	cout << "num + num2 = " << num + num2 << endl; 

	_getch();

	return 1;
}