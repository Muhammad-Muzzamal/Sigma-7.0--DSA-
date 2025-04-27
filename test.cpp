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
int main () {
    
    
    return 0;
}