#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "..\..\Class_HelperClass\Class_HelperClass\HelperBot.h"

using namespace std;

bool TryParse(string input, double& value);

void change(double PurchaseAmount, double &changeamount, int &fivedollars, int &dollar, int &quarter, int &dime, int &nickel, int &penny);

int main()
{
	bool quit = false;

	while (!quit)
	{
		//declare variables/constants for change and denominations
		string input = "";
		double PurchaseAmount = 0.00;
		double ChangeAmount = 0.00;

		int FiveDollarsCount = 0;
		int OneDollarCount = 0;
		int QuarterCount = 0;
		int DimeCount = 0;
		int NickelCount = 0;
		int PennyCount = 0;

		//Ask for the amount of purchase	
		cout << "Please enter the amount of your purchase" << endl << endl;
	
		//get the purchase amount
		cin >> input;

		if(TryParse(input, PurchaseAmount))
		{
			change(PurchaseAmount, ChangeAmount, FiveDollarsCount, OneDollarCount, QuarterCount, DimeCount, NickelCount, PennyCount);
			
			cout << setprecision(2) << fixed;			
			
			//output the denominations of the change given
			cout << "Your change is: $" << ChangeAmount << endl;
			cout << "It will be given to you in: " << endl << endl;
			cout << "\t" << FiveDollarsCount << "-5 dollar bills\n" << 
					"\t" << OneDollarCount << "-1 dollar bills\n" << 
					"\t" << QuarterCount << "-Quarters\n" << 
					"\t" << DimeCount << "-Dimes\n" << 
					"\t" << NickelCount << "-Nickels\n" << 
					"\t" << PennyCount << "-Pennies\n";
		}
		else 
		{
			cout << "Please enter a valid number or press 'q' to exit" << endl;

			cin >> input;
		}


		


		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}

	

	return 1;
}

//fuction to determine numeric value and convert to a double
bool TryParse(string input, double& value)
{
	bool success = HelperBot::IsNumeric(input);

	if(success)
	{
		value = HelperBot::ConvertToDouble(input);
	}
	

	return success;
}

void change(double PurchaseAmount, double &changeamount, int &fivedollars, int &dollar, int &quarter, int &dime, int &nickel, int &penny)
{
		double Change = 10 - PurchaseAmount;
		
		const int FiveDollars = 5.00;
		const int OneDollar = 1.00;
		const double Quarter = .25;
		const double Dime = .10;
		const double Nickel = .05;
		const double Penny = .01;

		changeamount = Change;

		while(Change != 0)
		{
			if(Change >= 5.00)
			{
				Change = Change - FiveDollars;
				fivedollars++;
			}
			while(Change >= 1.00 && Change < 5.00)
			{
				Change = Change - OneDollar;
				dollar++;
			}
			while(Change >= .25 && Change < 1.00)
			{
				Change = Change - Quarter;
				quarter++;
			} 
			while(Change >= .10 && Change < .25)
			{
				Change = Change - Dime;
				dime++;
			} 
			while(Change >= .05 && Change < .10)
			{
				Change = Change - Nickel;
				nickel++;
			}
			while(Change >= .009 && Change < .05)
			{
				Change = Change - Penny;
				penny++;
			}
			if(Change < .01)
			{
				Change = 0;
			}

		}	

		
}