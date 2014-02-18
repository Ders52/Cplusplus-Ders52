#include "iostream"
#include "conio.h"
#include "iomanip"
#include "string"

using namespace std;

int main()
{
	
	bool quit = false;

	while (!quit)
	{



		cout << "Press any key to continue or 'q' to quit" << endl;
		char c = _getch();

		if (c == 'q' || c == 'Q')
		{
			quit = true;
		}
	}	
	return 1;
}

