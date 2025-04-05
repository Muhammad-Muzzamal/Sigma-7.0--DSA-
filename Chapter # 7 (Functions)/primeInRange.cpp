#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void primeInRange(int n)
{
    for (int i = 0; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
    
}

int main ()
{
    primeInRange(100);
    return 0;
}
