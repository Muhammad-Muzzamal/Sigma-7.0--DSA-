#include <iostream>
using namespace std;
class Shape{
public:
    virtual void draw() = 0; // pure virtual function
};
class Square : public Shape{
public:
    void draw(){  // pure virtual function
        cout << "Square" << endl;
    }
};
class Circle : public Shape{
public:
    void draw(){  // pure virtual function
        cout << "Circle" << endl;
    }
};
int main() {
    Shape* s;
    s = new Square;
    s->draw();
    s = new Circle;
    s->draw();

    return 0;
}
/*
Abstraction:
    Hiding all unnecessary details and show only the important parts

    Abstract class and pure virtual function 

    unecessary details are hide by using access specifiers
    Abstract class thels how looks my child class 

    --Abstract Classes
        --Abstract classes are use to provide a base from which other classes are derived
        -- they cannot be instantiated and are ment to be inherited.
        -- Abstract classes are tipically used to define the interface of derived classes
*/