#include <iostream>
using namespace std;
int largest(int a, int b, int c)
{
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}
int main()
{
    cout << largest(3, 4, 5) << endl;
    cout << largest(3, 10, 6) << endl;

    return 0;
}