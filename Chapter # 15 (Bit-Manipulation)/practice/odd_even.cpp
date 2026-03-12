#include <iostream>
using namespace std;

void check_odd_even(int num)
{
    if (num & 1 == 1)
    {
        cout << "Odd\n";
    }
    else
    {
        cout << "Even\n";
    }
    return;
}

int get_ith_bit(int num, int i)
{
    return num & (1 << i);
}

int main()
{

    cout << get_ith_bit(5, 31);

    return 0;
}