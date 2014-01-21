#include <conio.h>
#include <iostream>

using namespace std;

int main()
{	
	//declare variables/constants for change and denominations
	double PurchaseAmount = 0.00;
	double Change = 0.00;
	double ChangeAmount = 0.00;
	const int FiveDollars = 5.00;
	const int OneDollar = 1.00;
	const double Quarter = .25;
	const double Dime = .10;
	const double Nickel = .05;
	const double Penny = .01;


	int FiveDollarsCount = 0;
	int OneDollarCount = 0;
	int QuarterCount = 0;
	int DimeCount = 0;
	int NickelCount = 0;
	int PennyCount = 0;

	//Ask for the amount of purchase	
	cout << "Please enter the amount of your purchase" << endl << endl;
	
	//get the purchase amount
	cin >> PurchaseAmount;

	//subtract purchase amount from $10 to calculate Change amount
	Change = 10 - PurchaseAmount;
	ChangeAmount = Change;

	cout << "\t\t$10.00" << endl;
	cout << "\t-\t$ " << PurchaseAmount << endl;
	cout << "___________________________" << endl;
	cout << endl;
	cout << "Your change is: $ " << ChangeAmount << endl << endl;

	//determine largest denomination of currency that can be given
	//Subtract the denomination from change and repeat the process until change left to give is $0
	while(Change != 0)
	{
		if(Change >= 5.00)
		{
			Change = Change - FiveDollars;
			FiveDollarsCount++;
		}
		while(Change >= 1.00 && Change < 5.00)
		{
			Change = Change - OneDollar;
			OneDollarCount++;
		}
		while(Change >= .25 && Change < 1.00)
		{
			Change = Change - Quarter;
			QuarterCount++;
		} 
		while(Change >= .10 && Change < .25)
		{
			Change = Change - Dime;
			DimeCount++;
		} 
		while(Change >= .05 && Change < .10)
		{
			Change = Change - Nickel;
			NickelCount++;
		}
		while(Change >= .009 && Change < .05)
		{
			Change = Change - Penny;
			PennyCount++;
		}
		if(Change < .01)
		{
			Change = 0;
		}

	}	
	
	//output the denominations of the change given
	cout << "It will be given to you in: " << endl << endl;
	cout << "\t" << FiveDollarsCount << "-5 dollar bills\n" << "\t" << OneDollarCount <<
		"-1 dollar bills\n" << "\t" << QuarterCount << "-Quarters\n" << "\t" << DimeCount <<
		"-Dimes\n" << "\t" << NickelCount << "-Nickels\n" << "\t" << PennyCount << "-Pennies\n";

	//wait for key press to close
	_getch();
}