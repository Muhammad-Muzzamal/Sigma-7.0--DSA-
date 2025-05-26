#include <iostream>
using namespace std;
class Base{
public:
    virtual void print() {
        cout << "Base" << endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        cout << "Derived" << endl;
    }
};
int main() {
    Base* b;
    b = new Derived;
    b->print();
    delete b;
    return 0;
}