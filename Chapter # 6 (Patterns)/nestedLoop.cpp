#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++) //outer loop
    {
        for (int j = 0; j < n; j++) // inner loop 
        {   //work
            cout << i+1 << " ";
        }
        // new line after each iteration of outer loop 
        cout << endl;
        
    }
        return 0;
}