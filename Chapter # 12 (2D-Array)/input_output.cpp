#include <iostream>
using namespace std;
int main () {
    cout << "Program Start..." << endl;
    int rowNum, colNum;
    rowNum = 3;
    colNum = 3;
    int arr[rowNum][colNum];
    // input
    for(int row=0; row < rowNum; row++) {
        for(int col = 0; col < colNum; col++) {
            cin >> arr[row][col];
        }
        // cout << endl;
    }
    // output
    for(int row=0; row < rowNum; row++) {
        for(int col = 0; col < colNum; col++) {
            cout << arr[row][col] << ", ";
        }
        cout << endl;
    }

    return 0;
}