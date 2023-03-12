// assign.cpp

#include <iostream>

using namespace std;

int main()
{
	// Variable declaration
	int a, b;

	cout << "Assign values: \t\ta = " << (a = 8) << "  b = " << (b = 4) << endl;

	cout << "Add & assign: \t\t";
	cout << "a += b (8 += 4)  a = \t" << (a += b) << endl;
	cout << "Subtract & assign: \t";
	cout << "a -= b (12 -= 4) a = \t" << (a -= b) << endl;

	cout << "Multiply & assign:\t";
	cout << "a *= b (8 *= 4)  a = \t" << (a *= b) << endl;
	cout << "Divide & assign: \t";
	cout << "a /= b (32 /= 4) a = \t" << (a /= b) << endl;
	cout << "Modulus & assign: \t";
	cout << "a %= b (8 %= 4)  a = \t" << (a %= b) << endl;

	return 0;
}
