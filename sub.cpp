// sub.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text = "I do like the seaside";
    cout << endl << "Original: " << text << endl;

    text.insert(10, "to be beside ");
    cout << "Inserted: " << text << endl << endl;

    text.erase(2, 3);
    cout << "Erased: " << text << endl;

    text.replace(7, 25, "strolling by the sea");
    cout << "Replaced: " << text << endl << endl;

    cout << "Copied: " << text.substr(7,9) << endl;
    cout << "Last character: " << text.at(text.size() - 1) << endl << endl;

    return 0;
}
