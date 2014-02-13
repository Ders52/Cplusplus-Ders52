#include "iostream"
#include "conio.h"
#include "iomanip"
#include "string"

using namespace std;

int main()
{
	int flavor = 0;
	bool quit = false;
	string flavors[] = {"Vanilla", "Chocolate", "Strawbery", "Blueberry"};
	int flavorsLengh = 4;
	while (quit == false)
	{
		cout << "Please select an ice cream flavor: " << endl;
		
		for (int i = 0; i < flavorsLengh; i++)
		{
			cout << i + 1 << ". " << flavors[i] << endl;
		}
		
		/*cout << "1. Vanilla" << endl;
		cout << "2. Chocolate" << endl;
		cout << "3. Strawberry" << endl;*/
		cin >> flavor;
		if (flavor - 1 >= flavorsLengh || flavor - 1 < 0)
		{
			cout << "Please enter a valid flavor" << endl;
		}
		else
		{					
			cout << "You selected: " << flavors[flavor - 1]<< endl;
		}
		
		
		
		//control structure code
		cout << "Press any key to continue, 'q' to quit" << endl;
		char c = _getch();

		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}
	

	return 1;
}