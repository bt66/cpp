#include <iostream>
//I fail to see where you used fstream.h

//It is better to declare global constants this way.
#define ARRAY_SIZE 3

using namespace std;

//You do not actually need the second argument (int numElems) it is already a global.
int searchList(string array[], string value);

int main()
{
    string someArray[ARRAY_SIZE] = {"mouse", "cat", "ant"};
    int results = searchList(someArray, "gg");

    if (results == -1)
        cout << "You did not earn 100 points on any test" << endl;
    else
    {
        cout << "You earned 100 points on test ";
        cout << (results + 1) << endl;
    }
    return 0;
}

int searchList(string array[], string value)
{
    for (unsigned i = 0; i < ARRAY_SIZE; i++)
    {
        if (array[i] == value)
        {
            return i;
        }
    }
    return -1;
}