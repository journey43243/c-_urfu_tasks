#include <iostream>
#include <vector>
#include <fstream>
#include "headers.h"
#include <sstream>
using namespace std;
void out_strings(vector<int> stuff)
{
    stringstream ss;
    for (const auto& number : stuff) {
        ss << number << "\n";
    }

    ofstream outputFile("output.dat", ios::binary);
    if (outputFile.is_open()) {
        const string& outputStr = ss.str();
        outputFile.write(outputStr.c_str(), outputStr.size());
        outputFile.close();
    }
}
