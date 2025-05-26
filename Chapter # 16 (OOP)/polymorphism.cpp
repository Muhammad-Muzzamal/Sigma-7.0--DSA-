#include <iostream>
using namespace std;

class Complex{
public:
    int real, complex;
    Complex() {}
    Complex(int real, int img) {
        this->real = real;
        this->complex = img;
    }
    // function overloading 
    void show(int n) {
        cout << "int : " << n << endl;
    }
    void show(string n) {
        cout << "String : " << n << endl;
    }
    void showNum() {
        cout << real <<  " + " << complex << endl;
    }

    // operator overloading 
    Complex operator +(Complex  &obj) {
        Complex temp;
        temp.real = this->real + obj.real;
        temp.complex = this->complex + obj.complex;
        return temp;
    } 

    Complex operator -(Complex &obj) {
        Complex result;
        result.real = this->real - obj.real;
        result.complex = this->complex - obj.complex;
        return result;
    }
    
};
// runtime Polymorphism

class Parent{
public:
    virtual void hello() {
        cout << "Hello Parent" << endl;
    }
    void show() {
        cout << "Parent class Show" << endl;
    }
};
class Child :public Parent {
public:
    void show() {
        cout << "Child class Show" << endl;
    }
    void hello() {
        cout << "Hello Child" << endl;
    }
};

int main() {
    Complex obj1;
    // function overloading
    obj1.show(1122);
    obj1.show("Hello Coders");
    // operator overloading
    Complex obj2(1, 2);
    Complex obj(3, 4);
    Complex obj3 = obj2 - obj;
    obj3.showNum();


    Parent* parent;
    parent = new Child;
    parent->hello();
    return 0;
}
/*
two types of polymorphism 

compile time polymorhism
    function overloading 
        same name 
        different paratemerts in type and number
    operator overloading 
        name of the operator same we just extend its functionality for user defined datatypes
    

run time polymorhism
    
    --Function overriding 
    parent and child has same function with different implementation the parent class function said to be overriden

    --Virtual Function 
        a virtual fuunction is a member function that you expect to be redefined in the derived class 
        we use virtual key word
        -- Properties of virtual functions
            --virtual functions are dynamic in nature
            --defined by keyword "virtual" inside a base class and always declared with a base class and override in the chld class.
            -- a virtual function is called during run time 
            

*/