#include <iostream>
using namespace std;
class Student
{
private:
    string name, grade;
    int age, roll_no;

public:
    // setter and getter
    void setName(string name)
    {
        if (name.size() == 0)
        {
            cout << "Invalid name";
            return;
        }
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }

    void setAge(int age)
    {
        this->age = age;
    }
    int getAge()
    {
        return this->age;
    }
    void setGrade(string grade)
    {
        this->grade = grade;
    }
    string getGrade(int pin)
    {
        if (pin == 123)
            return this->grade;
        return "";
    }
};
int main()
{
    Student s1;
    // s1.name = "Muhammad Muzzamal",
    // s1.age = 20;
    // s1.roll_no = 110837;
    // s1.grade = "A+";

    // cout << s1.name << endl;
    // cout << s1.age << endl;
    // cout << s1.roll_no << endl;
    // cout << s1.grade << endl;
    s1.setName("");
    s1.setAge(20);
    cout << s1.getName() << endl;
    cout << s1.getAge() << endl;
    cout << s1.getGrade(123) << endl;

    return 0;
}