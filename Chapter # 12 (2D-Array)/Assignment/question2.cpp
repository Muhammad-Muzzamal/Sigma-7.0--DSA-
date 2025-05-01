#include <iostream>
using namespace std;
int sum(int (*mat)[3], int n, int m) {
    int row;
    int sum = 0;
    cout << "Enter the Row number you wana calculate sum : ";
    cin >> row;
    if(row > n) {
        cout << "Invalid Row number !\n";
    }
    for(int i=0; i<m; i++) {
        sum += mat[row-1][i];
    }
    
    return sum;
}
int main() {
    int mat[3][3] = {{1,4,9},{11,4,3},{2,2,3}};
    cout << sum(mat, 3, 3) << endl;
    return 0;
}