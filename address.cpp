// address.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num = 100;
    double sum = 0.0123456789;
    string text = "C++ Fun";

    cout << "Integer variable starts at:\t" << &num << endl;
    cout << "Double variable starts at:\t" << &sum << endl;
    cout << "String variable starts at:\t" << &text << endl;

    return 0;
}
