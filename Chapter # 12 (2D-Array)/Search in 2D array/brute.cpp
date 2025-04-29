#include <iostream>
#include <climits>
using namespace std;
int search(int mat[][4], int row, int col, int target)
{
    int max = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == target)
            {
                cout << "(" << i << ", " << j << ")\n";
            }
        }
    }
    return -1;
}
int main()
{
    cout << "Hello World....\n";
    int row, col = row = 4;
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
                     
    int target = 12;
    search(mat, row, col, target);
    return 0;
}