// guard.cpp

#include <iostream>
#include "add.h"
#include "triple.h"

using namespace std;

int main()
{
    cout << "9 + 3 = " << add(9,3) << endl;
    cout << "9 x 3 = " << triple(9) << endl;

    return 0;
}