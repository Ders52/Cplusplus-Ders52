#include "iostream"
#include "conio.h"
#include "iomanip"
#include "string"

using namespace std;

double calculateWage(double, double);


int main()
{
	double salary = 0;	
	double hours_per_week = 0;
	string name = "";

	cout << "Please enter your salary: ";
	cin >> salary;
	cout << "Please enter hours per week: ";
	cin >> hours_per_week;
	
	//wage = calculateWage(salary, hours_per_week);

	cout << "You salary is: " << salary << endl;

	cout << "Your houly wage is: " << calculateWage(salary, hours_per_week);

	/*cout << "Please enter your name: ";
	cin >> name;
	cout << endl << "Your name is: " << name;*/

	_getch();
	return 1;
}

double calculateWage(double salary, double hours_per_week)
{
	double hours_per_year = hours_per_week * 50;

	double wage = salary / hours_per_year;

	return wage;
}