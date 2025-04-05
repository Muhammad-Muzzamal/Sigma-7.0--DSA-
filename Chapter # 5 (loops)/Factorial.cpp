#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    cout << "Factorial: " << fac <<endl;
    
    return 0;
}