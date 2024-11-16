#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
vector<int> read_data()
{
    setlocale(LC_ALL,"RU");
    vector<int> stuff;
    ifstream inf;
    inf.open("file.txt");
    while (!inf.eof())
    {
        int a;
        inf >> a;;
        stuff.push_back(a);

    }
    inf.close();
    return stuff;
}
