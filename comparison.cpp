// comparison.cpp

#include <iostream>

using namespace std;

int main()
{
    // Variable declaration and initialization
    int nil = 0;
    int num = 0;
    int max = 1;
    char cap = 'A';
    char low = 'a';

    cout << "Equality comparison:\t\t ";
    cout << "(0 == 0) " << (nil == num) << "(true)";
    cout << "(A == a) " << (cap == low) << "(false)" << endl;
    cout << "Inequality comparison:\t\t ";
    cout << "(0 != 1) " << (nil != max) << "(true)" << endl;

    cout << "Greater than comparison:\t ";
    cout << "(0 > 1)  " << (nil > max) << "(false)" << endl;
    cout << "Less than comparison:\t\t ";
    cout << "(0 < 1)  " << (nil < max) << "(true)" << endl;

    cout << "Greater or equal comparison:\t ";
    cout << "(0 >= 0) " << (nil >= num) << "(true)" << endl;
    cout << "Less or equal comparison:\t ";
    cout << "(1 <= 0) " << (max <= num) << "(false)" << endl;

    return 0;

}
