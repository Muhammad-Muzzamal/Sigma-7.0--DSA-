#if !defined(USER_H)
#define USER_H
#include <iostream>
using namespace std;
class User {
private:
    int id;
    string password;
public:
    string username;

    User(int id) {
        this->id=id;
    }
    //setter 
    void setpassword(string password) {
        this->password = password;
    }
    string getpassword() {
        return password;
    }


};



#endif // USER_H
