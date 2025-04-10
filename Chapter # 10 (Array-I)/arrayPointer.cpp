#include<iostream>
using namespace std;
int main()
{
    // int x = 10;
    // int *ptr = &x;
    // int y = 20;
    // ptr = &y;
    // cout << *ptr << endl; //20


    //But in the case of pointer in arrays, it act as a constant pointer 

    int arr[5];
    cout << arr << endl; // store address of arr[0]
    int y = 10;
    arr = &y; // this is not possible beacuse i thoow an error that lvalue is unmodifiable we cannot update it 
    return 0;
}