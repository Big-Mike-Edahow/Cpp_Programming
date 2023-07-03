// write.cpp

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string poem = "\n\tI never saw a man who looked";
    poem.append("\n\tWith such a wistful eye");
    poem.append("\n\tUpon that little tent of blue");
    poem.append("\n\tWhich prisoners call the sky");

    // Create an output filestream object
    ofstream writer("poem.txt");

    // If something went wrong, signal an error and exit
    if(!writer) {
        cout << "Error opening file for output" << endl;
        return -1;
    }
    else {
        // Write output
        writer << poem << endl;

        // Close filestream
        writer.close();
    }

    return 0;
}
