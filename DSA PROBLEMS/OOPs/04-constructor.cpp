#include <iostream>
using namespace std;
class Student{
    private:
        int roll;
        char grade;
    
    public:
        // default constructor
        Student() {
            cout << "Student Contructor\n";
        }
        // parameterized constructor
        // constructor overloading
        Student(int roll) {
            this->roll = roll;
        }
        Student(char grade) {
            this->grade = grade;
        }
        // Student(int roll, char grade) {
        //     this->roll = roll;
        //     this->grade = grade;
        // }
        // incline constructor
        Student(int roll, char grade): roll(roll), grade(grade) {}
        void display() {
            cout << "Roll # " << this->roll << endl;
            cout << "Grade : " << this->grade << endl;
        }
        // Copy Conructor
        Student(Student &obj) {
            roll = obj.roll;
            grade = obj.grade;
        }
};
int main() {
    
    Student s1;
    Student s2(110837, 'A');
    Student s3(s2);
    s2.display();
    s3.display();
    return 0;
}