#include<iostream>
using namespace std;
int binToDec(int num)
{
    int decimal = 0;
    int pow = 1;
    while (num > 0)
    {
        int lastDigit = num % 10;
        decimal += (lastDigit * pow);
        pow *= 2;
        num /= 10;
    }
    return decimal;
    
}
int main()
{
    cout << binToDec(1100) << endl;
    cout << binToDec(101) << endl;
    return 0;
}