#include <iostream>
#include "HelperBot.h"
#include "Collection.h"

using namespace std;

int main()
{
    cout << "Hello World" << endl;

    int value = HelperBot::ConvertToInt("55");

    Collection<int> c;
    c.Add(1);
    c.Add(2);
    c.Add(3);

    cout << "c:" << c << endl;


    cout << value;

    return 0;
}

