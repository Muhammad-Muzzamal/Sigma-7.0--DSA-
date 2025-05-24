#if !defined(CAR_H)
#define CAR_H
#include <iostream>
using namespace std;
class Car{
private:
    string color;
    int model;
public:
    Car() { 
        cout << "Default Constructor..." << endl;
    }
    Car(int model, string color) {
        this->model = model;
        this->color = color;
        cout << "Paramterized Constructor Called" << endl; 
    }
    // copy constructor
    Car(Car &orignal) {
        cout << "Copy Constructor Called" << endl;
        this->model =  orignal.model;
        this->color = orignal.color;
    }
    void start() {
        cout << "Car has Started...." << endl;
    }
    void stop() {
        cout << "Car has Stoped !" << endl;
    }
    // setter
    void setname(string color) {
        this->color = color;
    }
    void setmodel(int model) {
        this->model=model;
    }
    // getter
    string getcolor() {
        return color;
    }
    int getmodel() {
        return model;
    }
    void info() {
        cout << getmodel() << endl;
        cout << getcolor() << endl;
    }
    ~Car() {
        cout << "Destructor...." << endl;
    }
};

#endif // CAR_H
