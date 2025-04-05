#include<iostream>
using namespace std;
int main()
{
    int x = 5; 
    int y = 10;
    int *ptr1 = &x; //address of x
    int *ptr2 = &y; //address of y
    ptr2 = ptr1; // assign value in ptr1 to ptr2 that is actually address of x 
    // let varify

    cout << &x<< endl;
    cout << ptr1 << endl;
    cout << ptr2 << endl;

    return 0;
}