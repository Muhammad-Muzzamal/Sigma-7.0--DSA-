#include <iostream>
using namespace std;
class Complex {
public:
    int real;
    int img;
    Complex() { }
    Complex(int r, int i) {
        real = r;
        img = i;
    }
    void display() {
        cout << real << " + " << img << "i" << endl;
    }
    Complex operator - (Complex &obj) {
        Complex result;
        result.real = this->real - obj.real;
        result.img = this->img - obj.img;
        return result;
    }
};
int main() {
    Complex c1(5, 3);
    Complex c2(3, 5);
    Complex c3 = c1 - c2;
    c3.display();
    return 0;
}