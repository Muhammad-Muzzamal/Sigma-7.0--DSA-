#include <iostream>
using namespace std;

class InstagramUser
{
private:
    string name;
    string city;
    int age;
    int followers;

public:
    InstagramUser()
    {
        this->name = "";
        this->city = "";
        this->age = 0;
        this->followers = 0;
    }
    InstagramUser(
        string name,
        string city,
        int age,
        int followers)
    {
        this->name = name;
        this->city = city;
        this->age = age;
        this->followers = followers;
    }
};
class User
{
    char c1;
    int b;
    char c;
    
};

int main()
{
    cout << sizeof(User) << endl;
    return 0;
}