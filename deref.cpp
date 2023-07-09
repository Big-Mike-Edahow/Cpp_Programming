// deref.cpp

#include <iostream>

using namespace std;

int main()
{
    int a = 8;
    int b = 16;

    int* aPtr = &a;     // aPtr assigned address of a
    int* bPtr;          // bPtr declared
    bPtr = &b;          // bPtr assigned address of b

    cout << "Addresses of pointers..." << endl;
    cout << "aPtr: " << &aPtr << endl;
    cout << "bPtr: " << &bPtr << endl << endl;

    cout << "Values in pointers..." << endl;
    cout << "aPtr: " << aPtr << endl;
    cout << "bPtr: " << bPtr << endl << endl;

    cout << "Values in addresses pointed to..." << endl;
    cout << "a: " << *aPtr << endl;
    cout << "b: " << *bPtr << endl << endl;

    return 0;
}
