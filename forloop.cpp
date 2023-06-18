// forloop.cpp

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++) {
        cout << "Loop iteration: " << i << endl;
        for (int j = 0; j < 3; j++) {
            cout << "   Inner loop iteration: " << j << endl;
        }
    }

    return 0;
}
