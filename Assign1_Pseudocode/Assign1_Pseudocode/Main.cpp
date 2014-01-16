#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	//declare variables/constants for change and denominations
	float PurchaseAmount = 0.00;
	float Change = 0.00;
	const int FiveDollars = 5.00;
	const int OneDollar = 1.00;
	const float Quarter = .25;
	const float Dime = .10;
	const float Nickel = .05;
	const float Penny = .01;

	//Ask for the amount of purchase
	cout << "Please enter the amount of purchase" << endl;
	
	//get the purchase amount
	cin >> PurchaseAmount;

	//subtract purchase amount from $10 to calculate Change amount
	Change = PurchaseAmount - 10;

	//determine largest denomination of currency that can be given
	while(Change != 0)
	{
		if(Change > 5.00)
		{
			Change = Change - FiveDollars;
		}
	}

	//Subtract the denomination from change and repeat the process until change amount is reached

	//output the denominations of the change given

	_getch();
}