#include <iostream>
using namespace std;

// pass by value
void change1(int x) {
    x = 20;
}
// pass by reference
void change2(int* x) { // using pointer
    *x += 20;
}
void change3(int& x) { // using address operatoe alias
    x += 20;
}
int main()
{
    /**
     * ----------------------
     *       Pointers
     * ----------------------
     * * pointers are special veriable that store the address of another variable 
     *
     * & -> address of operator
     */

    int a = 10;
    cout << "Address of a : " << &a << "\n";

    //  pointer
    int *ptr = &a;
    cout << *ptr << endl;
    cout << &a << " = " << ptr << endl;

    // float
    float b = 20.2;
    float* ptr1 = &b;
    cout << &b << " = " << ptr1 << endl;

    // double
    double d = 30.33;
    double* ptr2 = &d;
    cout << "Double : " << d << endl;
    cout << &d  << " = " << ptr2 << endl;
    cout << d << " = " << *ptr2 << endl;

    char c = 's';
    char* ptr3 = &c;
    cout << "Char : " << c << endl;
    cout << &c << " = " << ptr3 << endl;
    cout << c << " = " << *ptr3 << endl;

    // pointer to pointer
    cout << "Pointer of Pointer" << endl;
    int num = 100;
    int* num_ptr = &num;
    int** pptr = &num_ptr;

    cout << "Number : " << num << endl;
    cout << &num << " = " << num_ptr << endl;
    cout << &num_ptr << " = " << pptr << endl;

    cout << "Number : " << num << endl;
    cout << "Number : " << *num_ptr << endl; // dereference operator ( * ) use to access values at that address
    cout << "Number : " << *(*pptr) << endl;

    // example of dereference operator
    int num1 = 200;
    cout << "Address of num1 : " << &num1 << endl;
    cout << "Values of at address &num : " << *(&num1) << endl;

    *(&num1) = 300;
    cout << num1 << endl;

    int* ptr4 = NULL;
    cout << ptr4 << endl;
    // cout << *ptr4 << endl; // segmentation fault

    // pass by values and pass by reference
    
    int x = 20;
    change1(x); // pass values
    cout << "x = " << x << endl; // x = 20
    change2(&x); // x = 20 + 20 = 40
    cout << "x = " << x << endl; // x = 40
    change3(x); // x = 40 + 20 = 60
    cout << "x = " << x << endl; // x = 60
    
    


    return 0;
}