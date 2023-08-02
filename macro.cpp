// macro.cpp

#include <iostream>
using namespace std;

#define SQUARE(n) (n * n)
#define CUBE(n) (n * n * n)

inline int square(int n) {return (n * n);}
inline int cube(int n) {return (n * n * n);}

int main()
{
    int num = 5;

    cout << endl;
    cout << "Macro SQUARE: " << SQUARE(num) << endl;
    cout << "Inline square: " << square(num) << endl << endl;
    cout << "Macro CUBE: " << CUBE(num) << endl;
    cout << "Inline cube: " << cube(num) << endl << endl;

    return 0;
}
