#include <iostream>
#include <climits>
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
int main () {
    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(int);
    
    return 0;
}