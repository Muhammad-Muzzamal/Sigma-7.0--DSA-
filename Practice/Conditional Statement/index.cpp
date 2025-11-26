#include <iostream>
using namespace std;
void checkNumber(int num)
{
    if (num == 0)
    {
        cout << "Number is Zero\n";
        return;
    }
    else if (num > 0)
    {
        cout << "Numeber is Positive\n";
        return;
    }
    else
    {
        cout << "Number is Negative\n";
        return;
    }
}
int main()
{
    checkNumber(0);

    return 0;
}