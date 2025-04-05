#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int row = 0; row < n; row++)
    {
        cout << "* ";
        for (int col = 0; col < n-2; col++)
        {
            if (row == 0 || row == n-1)
            {
                cout << "* ";
            }
            else{
                cout <<  "  ";
            }
            
        }
        cout << "* " << endl;
        
    }
    
    return 0;
}