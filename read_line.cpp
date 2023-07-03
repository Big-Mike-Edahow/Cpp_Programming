// read_line.cpp

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    int i;

    // Create an input filestream object
    ifstream reader("poem.txt");

    if(! reader) {
        cout << "Error opening input file" << endl;
        return -1;
    }
    else {
        for (i = 0; ! reader.eof(); i++) {
            getline(reader, line);
            cout << line << endl;
        }
    }

    // Close the filestream
    reader.close();
    cout << "Total loop iterations: " << i << endl;

    return 0;
}