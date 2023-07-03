// format.cpp

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    const int RANGE = 12;
    string table[RANGE];
    int i = 0;
    int j = 0;

    // Create an input filestream object
    ifstream reader("records.txt");

    if (!reader)
    {
        cout << "Error opening input file" << endl;
        return -1;
    }

    while (!reader.eof())
    {
        if ((i + 1) % 4 == 0)
        {
            getline(reader, table[i++], '\n');
        }
        else
        {
            getline(reader, table[i++], '\t');
        }

        // Close the filestream
        reader.close();

        // Reset the counter
        i = 0;

        while (i < RANGE)
        {
            cout << endl
                 << "Record Number: " << ++j << endl;
            cout << "Forename: " << table[i++] << endl;
            cout << "Surname: " << table[i++] << endl;
            cout << "Department: " << table[i++] << endl;
            cout << "Telephone: " << table[i++] << endl;
        }
    }

    return 0;
}