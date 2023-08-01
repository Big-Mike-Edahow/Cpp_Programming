// else.cpp

#include <iostream>
using namespace std;

#if defined __WIN32
    #define ARCH_TYPE "Microsoft Windows"
#elif defined __unix
    #define ARCH_TYPE "Unix"
#endif

#if defined __linux
    #define OS_SYSTEM "Debian Linux"
#elif defined __WIN32
    #define OS_SYSTEM "Windows 11"
#endif

int main()
{
    if (ARCH_TYPE == "Microsoft Windows")
    {
        cout << endl << "Archetecture is " << ARCH_TYPE << " running " << OS_SYSTEM << "." << endl;
        cout << "Performing Windows-only tasks..." << endl << endl;
    }
    if (ARCH_TYPE == "Unix")
    {
        cout << endl << "Archetecture is " << ARCH_TYPE << " running " << OS_SYSTEM << "." << endl;
        cout << "Performing Linux-only tasks..." << endl << endl;
    }

    return 0;
}
