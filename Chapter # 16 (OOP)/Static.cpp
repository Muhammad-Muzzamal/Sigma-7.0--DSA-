#include <iostream>
using namespace std;
// static objects
void counter() {
    static int count = 0;
    count++;
    cout << "count : " << count << endl;
}
class Example{
public:
    static int x;
    static const int n = 1;
    Example() {
        cout << "Object : " << this->x++ << endl;
        cout << n << endl;
    }
};
int Example ::x = 0;
class Example1 {
    public:
        Example1() {
            cout << "constructor.." << endl;
        }
        ~Example1 () {
            cout << "Destructor.." << endl;
        }
};
int main() {
    int a = 0;
    if(a == 0) {
        static Example1 eg1;
    }
    cout << "Code ending.." << endl;
    return 0;
}
/*
Static Keyword:
    --Static variable
        --variables declare as in a function are created & initialised once for the lifetime of the program. // In Functions
    
        -- static variables in a class are created & initialised ones.They are shared all the objects of the class. // In Class 

    -- Static Objects
    
*/