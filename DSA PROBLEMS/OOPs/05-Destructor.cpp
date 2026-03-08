#include <iostream>
using namespace std;

class Customer{
    string name;
    int *balance;

    public:
    // 
    Customer(string name, int balance) {
        cout << name << "Custructor called\n";
        this->name = name;
        // this->balance = new int(balance);
        this->balance = new int;
        *this->balance = balance;
    }

    void display() {
        cout << this->name << endl;
        cout << *this->balance << endl;
    }

    // destructor
    ~Customer() {
        cout << this->name<<"Destructor called\n";
        delete balance;
    }

};

int main() {
    Customer c1("Muzzamal", 1122);
    Customer c2("Muhammad", 10000);
    c1.display();
    c2.display();
    return 0;
}