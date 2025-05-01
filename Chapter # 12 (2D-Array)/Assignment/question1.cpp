#include <iostream>
using namespace std;
int count(int (*mat)[3], int row, int col, int key) {
    int count = 0;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(mat[i][j] == key) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    int mat[2][3] = {{4, 7, 8},
                     {8, 8, 7}};
    int key = 7;
    cout << count(mat, 2, 3, 7);
    return 0;
}