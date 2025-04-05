#include<iostream>
using namespace std;
int main()
{
    
    return 0;
}

/*
Dereferance Operator :
    => gets the value of variable pointed by any pointer.
    => * operator lets as directly access and modify the 
        value of variable.
        *(Address) => value at address

        
        let a = 10;
        cout << &a << endl;  address of variable a
        cout << *(&a) << endl;  print value at the address 

        int a = 10;
        int *ptr = &a;
        cout << ptr << endl; ===> Print address of a 
        cout << *ptr << endl; ===> print the value at the stored address 

        we can modify the value using dereferrance operator 

        Example :

        int a = 10;
        int *ptr = &a;
        cout << a << endl;  a = 10
        *ptr = 20;
        cout << a << endl;  a = 20 (update)


*/