#include <iostream>
using namespace std;
class Heap {
public: 
    int *arr;
    int size;
    int total_size;

    Heap(int n) {
        total_size = n;
        size = 0;
        arr = new int[n];
    }

    void insert(int data) {
        arr[size] = data;
        int index = size;
        size++;

        while(index > 0 && arr[(index-1)/2] < arr[index] ) {
            swap(arr[index], arr[(index-1)/2]);
            index = (index-1)/2;
        }

        cout << (arr[index]) << " is inserted into heap successfully\n";
    }
    void print() {
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    void Heapify(int index) {
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        if(left < size && arr[left]>arr[largest]) {
            largest = left;
        }

        if(right < size && arr[right] > arr[largest]) {
            largest = right;
        }

        if(largest != index) {
            swap(arr[index], arr[largest]);
            Heapify(largest);
        }
    }
    void Delete() {
        if(size == 0) {
            cout << "Heap is Underflow\n";
            return;
        }

        cout << arr[0] << " deleted from the heap\n";
        arr[0] = arr[size-1];
        size--;

        if(size == 0) {
            return;
        }

        Heapify(0);
    }
};
int main() {
    cout << "Program Started\n";

    Heap H1(6);
    for(int i=0; i<10; i++) {
        H1.insert(i);
    }
    H1.print();
    return 0;
}
// g++ codeArmy.cpp -o codeArmy && codeArmy