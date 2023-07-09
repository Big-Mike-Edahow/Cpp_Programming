// except.cpp

#include <iostream>
#include <stdexcept>    // Support standard exception
#include <typeinfo>     // Support type information
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string lang = "C++";
    int num = 1000000000;

    try {
        lang.replace(100, 1, "C");
    }

    /* Second try block
    try {
        lang.resize(3 * num);
    }
    */

    catch(out_of_range &e) {
        cerr << "Range Exception: " << e.what() << endl;
        cerr << "Exception Type: " << typeid(e).name();
        cerr << endl << "Program terminated." << endl;

        return -1;
    }
    catch(exception &e) {
        cerr << "Exception: " << e.what() << endl;
        cerr << "Exception Type: " << typeid(e).name() << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}
