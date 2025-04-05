#include<iostream>
using namespace std;
int decToBin(int dec)
{
    int bin = 0;
    int pow = 1;
    while (dec > 0)
    {
        int lastDigit = dec % 2;
        bin += pow * lastDigit;
        dec /= 2;
        pow *= 10;
    }
    return bin;
}
int main()
{
    cout << decToBin(7) << endl;
    cout << decToBin(110) << endl;
    
    return 0;
}