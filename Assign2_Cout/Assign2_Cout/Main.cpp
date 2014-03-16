#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	 int i, j;
   for (i=0; i <=4; i++ )
   {
       for (j = 0; j<2; j++)
          cout << i;
       cout << endl;
   } 

   int optselect = 1;
if (optselect = 2)
   cout << "Happy Birthday";
else
   cout << "Better Luck Tomorrow";

	//output a line and start a new line	
	cout << "Computers, computers everywhere" << endl;

	//output a tabbed in line and start a new line	
	cout << "\tas far as I can C." << endl; 
	
	//output a line and start a new line	
	cout << "I really, really like these things." << endl;
	
	//output a tabbed in line and start a new line	
	cout << "\tOh joy. Oh joy for me!";
	
	//wait to close te program until a key is pressed
	_getch();
	return 1;
}