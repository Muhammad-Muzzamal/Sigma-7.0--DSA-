#include <iostream>
using namespace std;
void spiralMatrix(int mat[][4], int row, int col) {
    int srow = 0;
    int scol = 0;
    int erow = row - 1;
    int ecol = col - 1;
    while (erow >= srow && ecol >= scol) {
        // top
        for (int i = srow; i <= ecol; i++) {
            cout << mat[srow][i] << ", ";
        }
        // right
        for (int i = srow + 1; i <= erow; i++) {
            cout << mat[i][ecol] << ", ";
        }
        // bottom
        for (int i = ecol - 1; i >= scol; i--) {
            if(srow == erow) {
                break;
            }
            cout << mat[erow][i] << ", ";
        }
        // left
        for (int i = erow - 1; i >= srow + 1; i--) {
            if(scol == ecol) {
                break;
            }
            cout << mat[i][scol] << " ";
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
}

int main()
{
    int n = 4;
    int m = 4;
    int matrix[4][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12},
                        {13, 14, 15, 16}};
    spiralMatrix(matrix, n, m);
    return 0;
}