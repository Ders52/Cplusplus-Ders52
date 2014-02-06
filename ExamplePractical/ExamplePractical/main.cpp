#include "iostream"
#include "conio.h"
#include "iomanip"

using namespace std;

int main()
{
	double Num_Cats = 0;
	double Cost_Per_Cat = 0.0;
	double Total = 0.0;

	cout << "How many cats would you like?:";
	cin >> Num_Cats;

	cout << fixed << setprecision(2);

	cout << endl << "How much does each cat cost?: $";
	cin >> Cost_Per_Cat;

	Total = Num_Cats * Cost_Per_Cat;


	cout  << endl << "You owe: $" << Total << endl;
	

	_getch();
	return 1;
}