// string.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text = "9";
    string term("9 ");
    string info = "Toys";
    string color;

    char hue[4] = {'R', 'e', 'd', '\0'};
    color = hue;

    info = " Balloons";

    text += (term + color + info);
    cout << endl << text << endl << endl;

    return 0;
}
