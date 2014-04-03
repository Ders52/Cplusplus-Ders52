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
		cout << endl << "Please enter a length for your array" << endl;
		
		string inputLength = "";
		cin >> inputLength;
		int arrTotal = 0;
		int arrLength;
		//make sure the input length is numeric and convert to an int
		if(HelperBot::IsNumericInt(inputLength))
		{
			arrLength = HelperBot::ConvertToInt(inputLength);
			int* userIntArr = new int[arrLength];
			int* revArr = new int[arrLength];
			
			//make sure length is greater than or equal to 1
			if(arrLength >= 1)
			{

				for (int i = 0; i < arrLength; i++)
				{	
					
					//assign values and length to the array equal to the user's specified length
			
					string input = "";
					int value;
			
					cout << "Please enter a number for the array" << endl;
					cin >> input;

					if(HelperBot::IsNumericInt(input))
					{
						value = HelperBot::ConvertToInt(input);
					
						userIntArr[i] = value;
						//add all the values in the array						
						arrTotal += userIntArr[i];
						
						//add values into a second array in reverse order
						revArr[arrLength - (i + 1)] = value;

						//when last value is added to array display the total of all values and the reversed array
						if(i == arrLength - 1)
						{
							cout << "The total of all values in the array is: " << arrTotal << endl;
							
							for(int k = 0; k < arrLength; k++)
							{							
								cout << revArr[k];
							}
						}
					}
					else
					{
						cout << "Please enter a valid number: ";
						cin >> input;
						
					}
						
			
				}
			}
		}
		else
		{
			cout << "Please enter a valid length" << endl;
			cin >> inputLength;
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


