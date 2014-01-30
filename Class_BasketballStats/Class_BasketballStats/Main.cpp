#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	//string Teams [2] = {"Badgers", "Golden Gophers" };
	
	int column_width = 10;

	string Wisc = "Badgers";
	
	double Badgers_Win = 17;
	double Badgers_Loss = 4;
	double Badgers_Avg =  Badgers_Win / (Badgers_Loss + Badgers_Win);
	
	string Minn = "Golden Gophers";

	double Golden_Gophers_Win = 15;
	double Golden_Gophers_Loss = 6;
	double Golden_Gophers_Avg = Golden_Gophers_Win / (Golden_Gophers_Loss + Golden_Gophers_Win);

	cout << fixed << setprecision(0);
	
	cout << "Golden_Gophers_Win " << hex << (int) Golden_Gophers_Win << endl;
	cout << "Badgers_Win " << hex << (int) Badgers_Win << endl << endl;

	cout << left << setw(15) << "Team" << right << setw(column_width) << "Win" << setw(column_width) << "Loss" << setw(column_width) << "Avg" << endl;
	cout << left << setw(15) << Wisc << right << setw(column_width) << Badgers_Win << setw(column_width) << Badgers_Loss << setw(column_width) << setprecision(3) << Badgers_Avg << setprecision(0) << endl;
	cout << left << setw(15) << Minn << right << setw(column_width) << Golden_Gophers_Win << setw(column_width) << Golden_Gophers_Loss << setw(column_width) << setprecision(3) << Golden_Gophers_Avg << endl;


	_getch();
	return 1;
}