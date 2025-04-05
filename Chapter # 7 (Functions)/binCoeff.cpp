#include<iostream>
using namespace std;
int factorial(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}

int binCoeff(int n, int r)
{
    int fac1 = factorial(n);
    int fac2 = factorial(r);
    int fac3 = factorial(n-r);
    int ans = fac1 / (fac2 * fac3);
    return ans;
}
int main()
{
    cout << binCoeff(4, 2) << endl; //4C2 ==> 6
    cout << binCoeff(6, 2) << endl; //6C2 ==> 15
    
    return 0;
}