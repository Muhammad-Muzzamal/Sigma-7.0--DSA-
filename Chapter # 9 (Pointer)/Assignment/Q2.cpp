#include<iostream>
using namespace std;
void multiplyBy2(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}
int main()
{
    int x = 1;
    int y = 2;
    int z = 3;
    multiplyBy2(x, y, z);
    cout << x << ", " << y << ", " << z ;
    return 0;
}