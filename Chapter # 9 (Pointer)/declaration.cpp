#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptr1 = &ptr; //pointer to pointer

    cout << a << "\n"; 
    cout << ptr << "\n"; //Address of a
    cout << ptr1 << "\n"; //Address of Ptr
    return 0;
}