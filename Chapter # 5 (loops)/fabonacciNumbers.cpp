#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int t1, t2;
    t1 = 0;
    t2 = 1;
    cout << "Fabinacci Series: " << t1 << " " << t2 << " ";
    for (int i = 2; i < n; i++)
    {
        int nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}