#include <iostream>
#include <vector>
#include <fstream>
#include "headers.h"
using namespace std;
void write_strings(vector<int> stuff)
{
    setlocale(LC_ALL,"RUSSIAN");
    for (int i = 0; i < stuff.size(); i++)
    {
        int a = stuff[i];
        cout << a;
    }
}
