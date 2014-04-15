#ifndef HELPERBOT_H_INCLUDED
#define HELPERBOT_H_INCLUDED

#include <string>


using namespace std;

class HelperBot
{
private:



public:
	static bool IsNumeric(string);
	static bool IsNumericInt(string);
	static int ConvertToInt(string);
	static double ConvertToDouble(string);

};

#endif // HELPERBOT_H_INCLUDED
