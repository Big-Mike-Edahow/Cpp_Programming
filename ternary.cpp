// ternary.cpp

#include <iostream>

using namespace std;

int main()
{
    // Variable declaration
    int a, b, max;

    // Variable initialization
    a = 1; b = 2;

    cout << "Variable a value is: ";
    cout << ((a != 1) ? "not 1, " : "1, ");
    cout << ((a % 2 != 0) ? "odd" : "even") << endl;

    cout << "Variable a value is: ";
    cout << ((b != 1) ? "not 1, " : "1, ");
    cout << ((b % 2 != 0) ? "odd" : "even") << endl << endl;

    max = (a > b) ? a : b ;
    cout << "Greater Value is: " << max << endl;

    return 0;
}