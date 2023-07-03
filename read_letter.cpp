// read_letter.cpp

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char letter;
    int i;

    // Create an input filestream object
    ifstream reader("poem.txt");

    if(! reader) {
        cout << "Error opening input file" << endl;
        return -1;
    }
    else {
        for (i = 0; ! reader.eof(); i++) {
            reader.get(letter);
            cout << letter;
        }
    }

    // Close the filestream
    reader.close();
    cout << "Total loop iterations: " << i << endl;

    return 0;
}