#include <iostream>
using namespace std;
int main() {
    int row, col, x=1;
    cout << "Enter th rows : ";
    cin >> row;
    cout << "Enter th col : ";
    cin >> col;
    

    int **matrix = new int*[row];

    for(int i=0; i<row; i++) {
        matrix[i] = new int[col];
    }

    // store data
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << matrix[2][2] << endl;
    cout << *(*(matrix+2)+2) << endl;

    return 0;
}