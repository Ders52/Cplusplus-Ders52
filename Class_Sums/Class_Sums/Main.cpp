#include <conio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double num1 = 1.37, num2 = 2, num3 = 3, 
		   sum = 4,
		   product = 0,
		   avg = 0,
		   exp = 0,
		   modulus = 0; 

	sum = num1 + num2 + num3;
	avg = sum / 3;
	product = num1 * num2;
	exp = pow(2,4);
	modulus = 5 % 2;


	cout << "Number 1 = " << num1 << endl;
	cout << "Number 2 = " << num2 << endl;
	cout << "Number 3 = " << num3 << endl;
	
	//sets fixed decimal place
	cout << setprecision(1) << fixed;

	cout << "Product = " << product << endl;
	cout << "Sum = " << sum << endl;
	
	//cout << setprecision(1) << fixed;
	//turns off fixed decimall place
	//cout << setprecision(1) << resetiosflags(ios::fixed);

	cout << "Avg = " << avg << endl;
	cout << "Exp = " << exp << endl; 
	cout << "Modulus = " << modulus << endl; 

	_getch();
	return 1;
}