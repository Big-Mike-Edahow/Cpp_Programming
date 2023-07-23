// override.cpp

#include <iostream>
#include <string>

using namespace std;

class Man
{
public:
    void speak()
    {
        cout << "Hello friend!" << endl;
    }
    void speak(string msg)
    {
        cout << "   " << msg << endl;
    }
};

class Hombre : public Man
{
public:
    void speak(string msg)
    {
        cout << msg << endl;
    }
};



int main()
{
    Man mike;
    Hombre enrique;

    cout << "Mike:" << endl;
    mike.speak();
    mike.speak("It\'s a beautiful evening.");

    cout << endl << "Enrique:" << endl;
    enrique.speak("Hola, amigo!");
    enrique.Man::speak("Es una tarde hermosa.");

    cout << endl << "Mike:" << endl;
    mike.speak("Vaya con dios, mi amigo!");

    cout << endl << "Enrique:" << endl;
    enrique.Man::speak("Gracias, mi amigo.");

    return 0;
}


