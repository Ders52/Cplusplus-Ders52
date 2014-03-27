#include "iostream"
#include "conio.h"
#include "iomanip"
#include "string"
#include "HelperBot.h"
#include "Collection.h"

using namespace std;

//void tempCollectionTest();

struct Student
{
	string FirstName;
	string LastName;
	int Credits;
};


int main()
{
	Student jeff;
	jeff.FirstName = "Jeff";
	jeff.LastName = "Richards";
	jeff.Credits = 27;


	Collection<Student> students;
	students.Add(jeff);

	for(int i = 0; i < students.Length(); i++)
	{
		Student tempStudent = students[i];
		cout << tempStudent.LastName << ", " << tempStudent.LastName << endl; 
	}

	Collection<string> names;
	names.Add("Austin");
	names.Add("Ryan");
	names.Add("Brett");
	names.Add("Hosey");
	names.Add("Jake");

	cout << "Names: " << names << endl;

	Collection<int> c;
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

//memory leak method
//void tempCollectionTest()
//{
//	Collection<int> temp;
//	for(int i =0; i < 50; i++)
//	{
//		temp.Add(55);
//	}
//}

