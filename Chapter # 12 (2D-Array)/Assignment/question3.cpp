#include <iostream>
using namespace std;
int transpose(int (*mat)[3], int row, int col) {
    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout << mat[i][i];
        }
        cout << endl;
    }
    
}
int main() {
    int mat[2][3] = {{1, 2, 3},{4, 5, 6}};
    int row = 2;
    int col = 3;
    transpose(mat, row, col);
    return 0;
}