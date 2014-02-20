#include "HelperBot.h"

bool HelperBot::IsNumeric(string value)
{
	//loop through all the characters
	//check whether they are 0-9
	//if not then return false
	//if they are, keep checking
	bool success = true;
	for (int i = 0; i < value.length(); i++)
	{
		//test if the character is a number here
		switch (value[i])
		{
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			break;
		default:
			success = false;
		
		}

		if (!success) break;
	}

	return success;
}

int HelperBot::ConvertToInt(string value)
{
	int total = 0;

	//loop hrough sring 
	for (int i = 0; i < value.length(); i++)
	{
	//read character, convert to digit
	int digit = 0;

	switch (value[i])
	{
		
		case '9':
			digit++;
		case '8':
			digit++;
		case '7':
			digit++;
		case '6':
			digit++;
		case '5':
			digit++;
		case '4':
			digit++;
		case '3':
			digit++;
		case '2':
			digit++;
		case '1':
			digit++;
		break;
	}
	
	int number = digit * pow(10, value.length() - (i + 1)); 
		
	//add number to total 
	total += number;
	
	}
	
	return total;
}