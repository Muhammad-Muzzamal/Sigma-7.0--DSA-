#include <iostream>
using namespace std;
int diagonalSum(int mat[][3], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += mat[i][i];
        if(i != n-i-1) {
            sum += mat[i][n-1-i];
        }
    }
    cout << "Sum : " << sum << endl;
}
int main()
{
    cout << "Progam Started......\n";
    int mat[3][3] = {{1, 2, 3},
                     {5, 6, 7},
                     {9, 10, 11}};
    int n = 3;
    diagonalSum(mat, n);
    return 0;
}