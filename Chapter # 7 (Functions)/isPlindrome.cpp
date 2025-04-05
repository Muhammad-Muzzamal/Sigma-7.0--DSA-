#include <iostream>
using namespace std;
bool isPlindrome(int num)
{
    int orignalNo = num;
    int reverseNo = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        reverseNo = (reverseNo * 10) + lastDigit;
        num /= 10;
    }

    if (reverseNo == orignalNo)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << isPlindrome(121) << endl;
    cout << isPlindrome(123) << endl;

    return 0;
}