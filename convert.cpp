// convert.cpp

#include <string>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
    string term = "100";
    int number = 100;

    int num;
    string text;
    stringstream stream;

    stream << term;         // Load the string into the stringstream
    stream >> num;          // Extract the integer

    num = num / 4;          // Perform arithmetic on the integer
    cout << endl << "Integer value: " << num << endl;

    stream.str("");         // Empty the stringstream contents
    stream.clear();         // Empty the bit flags

    stream << number;       // Load the integer
    stream >> text;         // Extract the text

    text += " per cent";
    cout << "String value: " << text << endl << endl;

    return 0;
}
