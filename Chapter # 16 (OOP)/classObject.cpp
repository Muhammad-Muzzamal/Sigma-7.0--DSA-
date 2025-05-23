#include <iostream>
using namespace std;
class Student {
public:
    int marks;
    string name; 
};
class User {
public:
    int id;
    string username;
    string password;
    string bio;
    void deactivate(){
        cout << "Your account is deactivated\n";
    }
};
int main() {
    // cout << sizeof(Student);
    User u1;
    u1.deactivate();
    return 0;
}