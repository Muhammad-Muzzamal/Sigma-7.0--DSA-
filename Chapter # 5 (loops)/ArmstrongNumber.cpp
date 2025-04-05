#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int orignalNumber = num;
    int ans = 0;
    while (num > 0)
    {
        int rem = num % 10;
        ans += (rem * rem * rem);
        num /= 10;
    }

    if (ans == orignalNumber)
    {
        cout << "Armstrong Number." << endl;
    }
    else
    {
        cout << "Not Armstrong Number." << endl;
    }

    return 0;
}