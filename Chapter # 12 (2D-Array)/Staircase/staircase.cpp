#include <iostream>
using namespace std;
bool staircaseSearch(int (*mat)[4], int n, int m, int key)
{
    int i = 0;
    int j = m - 1;
    while (i < n && j <= m)
    {
        int cell = mat[i][j];
        if (key == cell)
        {
            cout << "key found\n";
            return true;
        }
        else if (key < cell)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout << "key not found\n";
    return false;
}
int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    staircaseSearch(mat, 4, 4, 10);

    return 0;
}