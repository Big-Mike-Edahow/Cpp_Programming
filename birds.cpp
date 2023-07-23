// birds.cpp

#include <iostream>

using namespace std;

class Bird {
    public:
        virtual void Talk() const {
            cout << "A bird talks... " << endl;
        }
        virtual void Fly() const {
            cout << "A bird flys... " << endl;
        }
};

class Pigeon : public Bird {
    public:
        void Talk() const {
            cout << "Coo! Coo!" << endl;
        }
        void Fly() const {
            cout << "A pigeon flies away... " << endl << endl;
        }
};

class Chicken : public Bird {
    public:
        void Talk() const {
            cout << "Cluck! Cluck!" << endl;
        }
        void Fly() const {
            cout << "I\'m just a chicken - I can\'t fly!" << endl << endl;
        }
};

int main()
{
    Bird* pPigeon = new Pigeon;
    Bird* pChicken = new Chicken;

    cout << endl;

    pPigeon -> Talk();
    pPigeon -> Fly();
    pChicken -> Talk();
    pChicken -> Fly();
    pPigeon -> Bird::Talk();
    pChicken -> Bird::Fly();

    cout << endl;

    return 0;
}
