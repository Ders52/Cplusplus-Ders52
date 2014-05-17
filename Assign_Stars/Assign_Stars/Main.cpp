#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include "..\..\Class_HelperClass\Class_HelperClass\HelperBot.h"

using namespace std;

bool TryParse(string input, double& value);

int main()
{
	bool quit = false;

	while (!quit)
	{
		

		string patterns[] = {"*", "**", "***", "****", "*****", "******", "*******", "********", "*********", "**********" };
		string outter = "";
		string inner = "";

		
		int j = 8;

		for(int i = 0; i < 9; i++)
		{			
			

			cout << left << setw(10) << (outter = patterns[i]) << setw(10) << (inner = patterns[j]) << " " << right << setw(10) << inner << setw(10) << outter << endl;

			j--;
		}

			

		

		char c = _getch();
		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}

	

	return 1;
}
