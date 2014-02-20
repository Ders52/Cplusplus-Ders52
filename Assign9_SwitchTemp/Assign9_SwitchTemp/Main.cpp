#include "iostream"
#include "conio.h"
#include "iomanip"
#include "string"

using namespace std;

int main()
{
	//declare variables
	double degreesCels = 0;
	double degreesFahr = 0;
	double input = 0;
	char ConversionType = 'n';
	
	bool quit = false;

	//loop until 'q' is pressed 
	while (!quit)
	{
		//request and get conversion type
		cout << "Press 'f' to convert fahrenheit to celsius" << endl << "Press 'c' to convert celsius to fahrenheit" << endl;
		
		cin >> ConversionType;

		//set decimal precision
		cout << fixed << setprecision(2);
		
		// determine conversion type and calculate the degrees using respective formula
		//output values to user
		switch (ConversionType)
		{
		case 'F':

			cout << "Please enter degrees fahrenheit to convert to celsius" << endl;
			cin >> input;
			//Celsius = (5.0/9.0)*(fahrenheit – 32.0)
			degreesCels = .555556 * (input - 32);

			cout << input << " degress fahrenheit = " << degreesCels << " degrees celsius" << endl;

			break;
		case 'f':

			cout << "Please enter degrees fahrenheit to convert to celsius" << endl;
			cin >> input;
			//Celsius = (5.0/9.0)*(fahrenheit – 32.0)
			degreesCels = .555556 * (input - 32);

			cout << input << " degress fahrenheit = " << degreesCels << " degrees celsius" << endl;

			break;
		case 'C':

			cout << "Please enter degrees celsius to convert to fahrenheit" << endl;
			cin >> input;
			//Fahrenheit = 1.8*celsius + 32.0
			degreesFahr = 1.8 * input + 32.0;

			cout << input << " degress celsius = " << degreesFahr << " degrees fahrenheit" << endl;

			break;
		case 'c':

			cout << "Please enter degrees celsius to convert to fahrenheit" << endl;
			cin >> input;
			//Fahrenheit = 1.8*celsius + 32.0
			degreesFahr = 1.8 * input + 32.0;

			cout << input << " degress celsius = " << degreesFahr << " degrees fahrenheit" << endl;

			break;
		default:

			cout << "Please enter a valid conversion type" << endl;

			break;
		}


		//// determine conversion type and calculate the degrees using respective formula
		////output values to user
		//if(ConversionType == 'F' || ConversionType == 'f')
		//{
		//	cout << "Please enter degrees fahrenheit to convert to celsius" << endl;
		//	cin >> input;
		//	//Celsius = (5.0/9.0)*(fahrenheit – 32.0)
		//	degreesCels = (5/9) * (input - 32);

		//	cout << input << " degress fahrenheit = " << degreesCels << " degrees celsius" << endl;
		//}
		//else if(ConversionType == 'C' || ConversionType == 'c')
		//{
		//	cout << "Please enter degrees celsius to convert to fahrenheit" << endl;
		//	cin >> input;
		//	//Fahrenheit = 1.8*celsius + 32.0
		//	degreesFahr = 1.8 * input + 32.0;

		//	cout << input << " degress celsius = " << degreesFahr << " degrees fahrenheit" << endl;
		//}
		//else 
		//{
		//	cout << "Please enter a valid conversion type" << endl;

		//}

		//escape loop on 'q' press
		cout << "Press any key to continue or 'q' to quit" << endl;
		char c = _getch();

		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}	
	return 1;
}

