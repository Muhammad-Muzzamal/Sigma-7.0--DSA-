#include <iostream>
using namespace std;
class Person {
public:
    string name;
    unsigned int age;
    Person(string name, unsigned int age) {
        this->name = name;
        this->age = age;
    }

};
class Student : public Person {
public:
    string studentID;
    Student(string name,unsigned age, string studentID) : Person(name, age) {
        this->studentID = studentID;
    }
    void displayStudentInfo() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "StudentID : " << studentID << endl;
    }
};

int main() {
    Student student("Ahmad", 20, "S12345");
    student.displayStudentInfo();
    return 0;
}