#include<iostream>
using namespace std;
int abSquare(int a, int b)
{
    int ans;
    ans = (a * a) + (b * b) + (2 * a * b);
    return ans;
}
int main()
{
    cout << abSquare(2, 3) << endl;    
    cout << abSquare(2, 6) << endl;    
    return 0;
}