// append.cpp

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string info = "\n\tThe Ballad of Reading Gaol";
    info.append("\n\t\t\tOscar Wilde 1898\n");

    // Create a filestream object, specifying append to existing file
    ofstream writer("poem.txt", ios::app);

    // If the filestream doesn't exist, signal an error and exit
    if(!writer) {
        cout << "Error opening file for output" << endl;
        return -1;
    }
    else {
        // Append output
        writer << info << endl;

        // Close filestream
        writer.close();
    }

    return 0;
}
