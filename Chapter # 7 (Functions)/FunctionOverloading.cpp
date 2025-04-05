#include <iostream>
using namespace std;

// Function1 with name sum(int, int)
int sum(int a, int b)
{
    return a + b;
}

// Function2 with name sum(double, double)
double sum(double a, double b)
{
    return a + b;
}

// Function3 with the name sum(int, int, int)
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << sum(11, 22) << endl;    //Function 1
    cout << sum(11, 22, 33) << endl;    //Function 2
    cout << sum(11.4, 22.3) << endl;    //Function 3

    return 0;
}

/*

Function Overloading
    the same functions with different paramters is called function overloading.

    in the above code we use 3 functions having same name sum but different parameters 

*/