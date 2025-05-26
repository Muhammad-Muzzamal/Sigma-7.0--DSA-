#include <iostream>
using namespace std;
class BankAccount{
private:
    string accoutNumber;
    int balance;
public:
    // constructor
    BankAccount () {
        balance = 0;
        accoutNumber = " ";
    }
    // deposit
    void deposit(int amount) {
        if(amount > 0)
            balance += amount;
        else
            cout << "Invalid Amount" << endl;
    }

    // withdraw
    void withdraw(int amount) {
        if(amount < balance)
            balance -= amount;
        else 
            cout << "Invalid Amount" << endl;
    }
    // getBallance
    int getBallance() {
        return balance;
    }
};
int main() {
    BankAccount b;
    cout << b.getBallance() << endl;
    b.deposit(1000);
    cout << b.getBallance() << endl;
    return 0;
}