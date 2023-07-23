// constructor.cpp

#include <string>
#include <iostream>

using namespace std;

class Dog {
    private:
        int age;
        int weight;
        string color;
    public:
        void bark() {
            cout << "WOOF!" << endl;
        }
        Dog(int, int, string);      // Constructor prototype
        ~Dog();                     // Deconstructor prototype

        int getAge() {
            return age;
        }
        int getWeight() {
            return weight;
        }
        string getColor() {
            return color;
        }
};

// Constructor definiion
Dog::Dog(int age, int weight, string color) {
    this -> age = age;
    this -> weight = weight;
    this -> color = color;
}

// Destructor definition
Dog::~Dog() {
    cout << "Object destroyed." << endl;
}

int main()
{
    Dog fido(3, 15, "brown");
    Dog pooch(4, 18, "grey");

    cout << "Fido is a " << fido.getColor() << " dog" << endl;
    cout << "Fido is " << fido.getAge() << " years old" << endl;
    cout << "Fido weighs " << fido.getWeight() << " pounds" << endl;
    fido.bark();
    cout << endl;

    cout << "Pooch is a " << pooch.getAge() << " year old " << pooch.getColor();
    cout << " dog who weighs " << pooch.getWeight() << " pounds. ";
    pooch.bark();
    cout << endl;

    return 0;
}
