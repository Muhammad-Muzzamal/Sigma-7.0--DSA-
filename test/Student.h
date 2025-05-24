#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
class Student{
    string name;
    int rollno;
    string phone;
public:
    Student() {} // default constructor
    Student(int rollno, string name, string phone) { // parameterized constructor
        this->rollno = rollno;
        this->name = name;
        this->phone = phone;
    } 
    // getters
    string getname() { 
        return name;
    }
    int getrollno() {
        return rollno;
    }
    string getphone() {
        return phone;
    } 
    // setters
    void setname(string name) {
        this->name = name;
    }
    void setphone(string phone) {
        this->phone = phone;
    }
    void setrollno(int rollno) {
        this->rollno = rollno;
    }
    // display information of student
    void info() {
        cout << "Roll No. : " << rollno << endl;
        cout << "Name : " << name << endl;
        cout << "Phone : " << phone << endl;
    }
};


#endif
