#include <iostream>
using namespace std;
int main()
{
    int num = 100;
    for (int i = 2; i < num; i++)
    {
        bool isPrime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            cout << i <<" ";
        }
        
        
    }

    return 0;
}