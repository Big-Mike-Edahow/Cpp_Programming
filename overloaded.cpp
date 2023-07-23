// overloaded.cpp

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
        void bark(string noise) {
            cout << noise << endl;
        }
        Dog();
        Dog(int, int);
        Dog(int, int, string);      // Constructor prototype
        ~Dog();                     // Destructor prototype

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

// Default constructor method
Dog::Dog() {
    age = 1;
    weight = 2;
    color = "black";
}

// Overloaded constructor definition
Dog::Dog(int age, int weight) {
    this -> age = age;
    this -> weight = weight;
    color = "white";
}

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
    Dog rex;
    Dog sammy(2,6);
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

    cout << "Rex is a " << rex.getAge() << " year old " << rex.getColor();
    cout << " dog who weighs " << rex.getWeight() << " pounds. ";
    rex.bark("GRRR!");

    cout << "Sammy is a " << sammy.getAge() << " year old " << sammy.getColor();
    cout << " dog who weighs " << sammy.getWeight() << " pounds. ";
    sammy.bark("BOWOW!");
    cout << endl;

    return 0;
}
