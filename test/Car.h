#if !defined(CAR_H)
#define CAR_H
#include <iostream>
using namespace std;
class Car{
private:
    string color;
    int model;
    int* millage;
public:
    Car() { 
        cout << "Default Constructor..." << endl;
    }
    Car(int model, string color) {
        cout << "Paramterized Constructor Called" << endl; 
        this->model = model;
        this->color = color;
        millage = new int; // dynamicaly alocate memory
        *millage = 12;
    }
    // copy constructor make shallow copy
    // Car(Car &orignal) {
    //     cout << "Copy Constructor Called" << endl;
    //     model =  orignal.model;
    //     color = orignal.color;
    //     //make SHALLOW copy
    //     millage = orignal.millage;

    // }
    Car(Car &obj) {
        cout << "Copy constructor Called" << endl;
        model =  obj.model;
        color = obj.color;
        millage = new int;
        *millage = *obj.millage; 
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
    void setmillage(int mil) {
        *millage = mil;
    }
    // getter
    string getcolor() {
        return color;
    }
    int getmodel() {
        return model;
    }
    int getmillage() {
        return *millage;
    }
    void info() {
        cout << "Model : " << getmodel() << endl;
        cout << "Color : " << getcolor() << endl;
    }
    // ~Car() {
    //     cout << "Destructor...." << endl;
    // }
    ~Car() {
        if(millage != NULL) {
            delete millage;
            millage = NULL;
        }
    }
};

#endif // CAR_H
