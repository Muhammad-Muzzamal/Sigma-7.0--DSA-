#include<iostream>
using namespace std;
//pass by value 
int changeA(int a) {
    a = 20;
    cout << a << "\n";
}

//pass by reference  (using pointer)
int changeA2(int *ptr) {
    *ptr = 20;
    cout << *ptr << endl;
}

//pass by reference  (using pointer)
int changeA3(int &a) {
    a = 20;
    cout << a << endl;
}
int main()
{
    

    //passing by value 
    // int num = 10;
    // cout << num << endl; // 10
    // changeA(num); //20
    // cout << num << endl; //10 (unchange)

    


    // passing by referance (using pointer )
    // int num2 = 10;
    // cout << num2 << endl;  // 10 
    // changeA2(&num2); // 20 
    // cout << num2 << endl; // 20 (update)


    //passing by reference (using reference variable)
    int num3 = 10;
    cout << num3 << endl; // 10
    changeA3(num3); // 20
    cout << num3 << endl; // 20 (Update)
    


    return 0;
}



/*
    === Pass by Value ===
    when we pass our parameter by value it creates a copy
    os actual variable in the memory.
    when we pass by value to any function ot creates another copy 
    of variable and the anu=y change in the function is appplied to this copy,
    it does not effect the orignal valur of vriable .and orignal value remain unchange.


    === Pass by Reference (pointer) ===
    when we pass the reference of aurgument to thr function 
    when we pass the reference to any function ,we actually 
    create the pointer that store the address of the actual 
    variable and directly target the orignal variable thats 
    why ani change in the function also cause change in the 
    actual variable.abs


    === Pass by Reference (Reference operator) ===
    reference variable is an alternate name (alias) of already
    existing variable.
    when we pass a varibale by reference using reference operator 
    it actialy the another name of the actual variable called alis 
    for example : an actor has two different name in two different 
    dramas while the person is same.So change in the function is 
    actully the change in the actual variable.
*/