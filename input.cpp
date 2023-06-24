// input.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;

    cout << endl << "Please enter your full name: ";
    cin >> name;

    cout << endl << "Welcome " << name << endl << endl;

    cout << "Please re-enter your full name: ";
    cin.ignore(256, '\n');
    getline(cin, name);

    cout << endl << "Thanks, " << name << endl << endl;

    return 0;
}
