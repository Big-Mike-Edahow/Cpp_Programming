// args.cpp

#include <iostream>

using namespace std;

float fToC (float degreesF = 32.0);

int main()
{
    float fahrenheight;
    float centigrade;

    cout << "Enter a Fahrenheight temperature:\t";
    cin >> fahrenheight;

    centigrade = fToC(fahrenheight);

    cout << fahrenheight << "F is " << centigrade << "C";
    cout << endl << "Freezing point: " << fToC() << "C" << endl;

    return 0;
}

float fToC (float degreesF) {
    float degreesC = ((5.0 / 9.0) * (degreesF - 32.0));
    return degreesC;
}
