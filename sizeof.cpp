// sizeof.cpp

#include <iostream>
using namespace std;

int main()
{
    int num;
    int nums[50];
    float decimal;
    bool isTrue;
    unsigned int max;
    char letter;
    char letters[50];
    double pi;
    short int number;

    cout << "int size: " << sizeof(num)  << endl;
    cout << "50 int size: " << sizeof(nums) << endl;
    cout << "short int size: " << sizeof(number) << endl;
    cout << "unsigned int size: " << sizeof(max) << endl;

    cout << "double size: " << sizeof(pi) << endl;
    cout << "float size: " << sizeof(decimal) << endl;
    cout << "char size: " << sizeof(letter) << endl;
    cout << "50 char size: " << sizeof(letters) << endl;
    cout << "bool size: " << sizeof(isTrue) << endl;

    return 0;
}