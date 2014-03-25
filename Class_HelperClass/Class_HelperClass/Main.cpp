#include "iostream"
#include "conio.h"
#include "iomanip"
#include "string"
#include "HelperBot.h"
#include "Collection.h"

using namespace std;

void tempCollectionTest();

int main()
{
	Collection c;
	c.Add(5);
	c.Add(7);
	c.Add(11);
	c.Add(13);
	
	cout << "Length of Collection: " << c.Length() << endl;

	cout << c << endl;

	cout << "Element at 0: " << c[0] << endl;

	int numbers[] = {1, 2, 3};

	numbers[0] = 999;

	cout << "Numbers[0]: " << numbers[0] << endl;

	c[0] = 999;

	bool quit = false;

	while (!quit)
	{

		char quitChar = _getch();

		if (quitChar == 'q' || quitChar == 'Q')
		{
			quit = true;
		}
	}	
	return 1;
}

void tempCollectionTest()
{
	Collection temp;
	for(int i =0; i < 50; i++)
	{
		temp.Add(55);
	}
}

