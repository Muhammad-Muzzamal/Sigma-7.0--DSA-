#include<iostream>
using namespace std;
int main()
{
    // ptr++ , ++ptr
    // ptr-- , --ptr

    int x = 10;
    int *ptr = &x;
    //cout << ptr << endl; //let suppose address 0x101
    ptr++;
    //cout << ptr << endl; //let suppose address 0x105

    // char ch = 'A';
    // char *ptrch = &ch;
    // cout << ptrch << endl;
    // ptrch++; 
    // cout << ptrch << endl;


    // char ch[] = {'a', 'b', 'c', 'd'};
    // cout << ch << endl;
    // cout << ch + 1 << endl;

    char ch = 'A';
    void *ptr1 = &ch;
    cout << ptr1 << endl;


    

    return 0;
}