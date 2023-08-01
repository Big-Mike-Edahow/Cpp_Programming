// define.cpp

#include <iostream>
using namespace std;

#define BOOK "C++ Programming in easy steps"
#define NUM 200
#define RULE "*****************************"

int main()
{
    cout << RULE << endl << BOOK << endl << RULE;
    cout << endl << "NUM is: " << NUM << endl;
    cout << "Double NUM: " << ((NUM) * 2) << endl;

    return 0;
}

