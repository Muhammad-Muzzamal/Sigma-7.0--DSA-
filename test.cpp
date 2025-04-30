#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
// display function 
void display(int *arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
void bubbleSort(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    display(arr, n);
}
//selection sorting 
void selectionSort(int *arr, int n) {
    for(int i=0; i<n-1; i++) {
        int minIdx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    display(arr, n);
}
//inserion Sorting 
void insertionSort(int *arr, int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr) {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    display(arr, n);
}
//Counting sort
void countingSort(int arr[], int n) {
    int freq[100000];
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    for(int i=0; i<n; i++) {
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }
    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
    }
    for(int i=minVal, j=0; i<=maxVal; i++) {
        while (freq[i] > 0) 
        {
           arr[j++] = i;
           freq[i]--;
        }
    }
    display(arr, n);
}
//inbuild sort 
void ascSort(int arr[], int n) {
    sort(arr, arr+n);
    display(arr, n);
}
void descSort(int arr[], int n) {
    sort(arr, arr+n, greater<int>());
    display(arr, n);
}
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
// Brute force Approach to calculate the diagonal sum
int diagonalSumMatrixBrute(int mat[][3], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) { // control row 
        for(int j=0; j<n; j++) { // control col
            if(i == j) {
                sum += mat[i][j];
            }
            else if(j == n-1-i) {
                sum += mat[i][j];
            }
        }
    }
    cout << "Sum of Diagonals is : " << sum << endl;
    return sum;
}
int diagonalSumOptimized(int mat[][3], int n) {
    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += mat[i][i];
        if(i != n-1-1) {
            sum += mat[i][n-1-i];
        }
    }
    cout << "Diagonal Sum is : " << sum << endl;
}
int searchBrute(int mat[][3], int row, int col,int key) { // O(N^2) time complexity
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            if(mat[i][j] == key) {
                cout << "Key Found at Index : (" << i << ", " << j << ")\n";
                return 1;
            }
        }
    }
    cout << "Key is not found.\n";
    return -1; // if key not found 
}
bool staircaseSearch(int (*mat)[3], int n, int m, int key) {
    int row, col;
    row = 0;
    col = m-1;
    while (row < n && col <= m) {
        int curr = mat[row][col];
        if(key == curr){
            cout << "Key found\n";
            return true;
        }
        else if(key < curr) {
            col--;
        }
        else if(key > curr){
            row++;
        }
    }
    cout << "key not found\n";
    return false;
    
}
int main () { 
    cout << "Program Started.....\n";
    int matrix[3][3] = {{1, 2, 3},
                        {5, 6, 7},
                        {9, 10, 11}};
    cout << staircaseSearch(matrix, 3, 3, 100) << endl;
    
    return 0;
}