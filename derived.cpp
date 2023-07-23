// derived.cpp

#include <iostream>

using namespace std;

class Polygon {
    protected:
        int width;
        int height;
    public:
        void setValues(int w, int h) {
            width = w;
            height = h;
        }
};

class Rectangle: public Polygon {
    public:
        int area() {
            return(width * height);
        }
};

class Triangle: public Polygon {
    public:
        int area() {
            return((width * height) / 2);
        }
};

int main()
{
    Rectangle rect;
    Triangle triangle;

    rect.setValues(4,5);
    triangle.setValues(4,5);

    cout << "Rectangle area:\t" << rect.area() << endl;
    cout << "Triangle area:\t" << triangle.area() << endl;

    return 0;
}
