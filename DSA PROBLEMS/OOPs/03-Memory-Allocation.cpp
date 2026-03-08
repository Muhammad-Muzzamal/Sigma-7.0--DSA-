#include <iostream>
using namespace std;

class Student
{

public:
    string name;
    int age;
};

int main()
{
    Student *s1 = new Student;
    (*s1).name = "Muhammad";
    cout << (*s1).name << endl;
    s1->name = "Muzzamal";
    cout << s1->name << endl;

    return 0;
}