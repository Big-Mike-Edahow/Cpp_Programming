// while.cpp

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec(10);
    int i = 0;

    while (i < vec.size()) {
        i++;
        vec[i-1] = i;
        cout << " | " << vec.at(i-1);
    }
    cout << endl;

    return 0;
}
