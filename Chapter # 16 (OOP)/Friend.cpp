#include <iostream>
using namespace std;
class A{
    string secret = "secrete data";
    friend class B;
    friend void showSecret(A &ob);
};
class B {
public:
    void showSecrete(A &obj) {
        cout << obj.secret << endl;
    }
};
void showSecret(A &obj) {
    cout << obj.secret << endl;
}
int main() {
    B b;
    A a;
    b.showSecrete(a);
    return 0;
}
/*
A friend class or a friend fumction can assess private and protected member of other classes in which it is declare as a friend.
*/