#include <iostream>
#include "Utils.h"
using namespace std;

void printLine(int length, const char c)
{
    for (int i = 0; i < length; i++) {
        cout << c;
    }
    cout << endl;
}