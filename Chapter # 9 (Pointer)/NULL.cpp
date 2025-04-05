#include<iostream>
using namespace std;
int main()
{
    int *ptr = NULL;
    cout << *ptr; //Empty
    // cout << ptr ; //Empty
    return 0;
}


/*
============>  NULL POINTER <================
    we assigned the NULL value to a pointer to show taht it 
    does not point any location 

Example :

    int *ptr = NULL;
    cout << *ptr << endl; ->(it does not show any value because it does point to any location)
    cout << ptr << endl;  ->(it does not show any value because it does point to any location)


    we can not dereferance null pointer because it does not have any address
    it shows an error called " Sigment Error"

*/