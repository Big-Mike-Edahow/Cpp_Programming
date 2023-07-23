// virtual.cpp

#include <iostream>

using namespace std;

class Parent {
    public:
        void Common() const {
            cout << "I am part of this family, ";
        }
        virtual void identify() const {
            cout << "I am the parent." << endl;
        }
};

class Child : public Parent {
    public:
        void identify() const {
            cout << "I am the child." << endl;
        }
};

class Grandchild : public Child {
    public:
        void identify() const {
            cout << "I am the grandchild." << endl;
        }
        void Relate() const {
            cout << "Grandchild has parent and grandparent." << endl;
        }
};

int main()
{
    Child son;
    Grandchild grandson;
    Parent* ptrChild = &son;
    Parent* ptrGrandchild = &grandson;

    ptrChild -> Common();               // Inherited
    ptrChild -> identify();             // Overriding
    ptrGrandchild -> Common();          // Inherited
    ptrGrandchild -> identify();        // Overriding
    ptrChild -> Parent::Common();       // Explicit
    ptrChild -> Parent::identify();     // Explicit
    grandson.Relate();                  // Via instance

    return 0;
}
