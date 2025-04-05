#include<iostream>
using namespace std;
int digitSum(int n)
{
    int digitSum = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        digitSum += lastDigit;
        n /= 10;
    }
    return digitSum;
}
int main()
{
    cout << digitSum(123) << endl;
    cout << digitSum(123456) << endl;
    
    return 0;
}