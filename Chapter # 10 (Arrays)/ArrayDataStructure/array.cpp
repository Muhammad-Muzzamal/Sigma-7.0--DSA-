#include <iostream>
using namespace std;
template <class genType>
class Array {
private:
    int size;
    genType *array;
    int current;
public: 
    Array() {
        array = NULL;
        size = 0;
        current = -1;
    }
    Array(int size) {
        this->size = size;
        array = new genType;
        array[size];
    }
    int getSize() {
        return size;
    }
    void start() {
        if(!isEmpty()) {
            current = 0;
        }
    }
    int getCurrent() {
        return current;
    }
    int at(int i) {
        if(isEmpty()) {
            cout << "Array is Empty\n";
        }
        return array[i];
    }
    bool isEmpty() {
        return size == 0;
    }
    void display() {
        if(isEmpty()) {
            cout << "Array is Empty." << endl;
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    void printAddress() {
        for(int i = 0; i < size; i++) {
            cout << "Address of " << i << "Index : " << (array + i) << endl;
        }
    }
    void push_back(int val) {
        if(isEmpty()) {
            array = new genType(1);
            array[0] = val;
            // current++;
        }
        else {
            array[size] = val;
            // current++;
        }
        current++;
        size++;
    }
    int pop() {
        if(isEmpty()) {
            cout << "Array is Empty." << endl;
        }
        
        genType temp = array[0];
        for(int i = 0; i < size - 1; i++) {
            array[i] = array[i+1];
        }
        size--;
        return temp;

    }
    int find(genType target) {
        if(isEmpty()) {
            cout << "List is Empty\n";
            return -1;
        }
        else{
            for(int i = 0; i < size; i++) {
                if(array[i] == target) {
                    return i;
                }
            }
        }
        return -1;
    }
    void remove(genType val) {
        genType idx = find(val);
        if(idx >= 0) {
        for(int i = idx; i < size-1; i++) {
            array[i] = array[i+1];
        }
        size--;
        }
        return;
    }
    void removeFromEnd() {
        size--;
    }
    void removeFill(int val) {
        int temp = find(val);
        if(temp >= 0) {
            array[temp] = array[size-1];
            size--;
        }

    }
    void push_front(genType val) {
        if(isEmpty()) {
            array = new genType(1);
            array[0] = val;
            // current++;
        }
        else{
            for(int i=size; i>=0; i--) {
                array[i+1] = array[i];
            }
            array[0] = val;
        }
        current++;
        size++;
    }

};

int main() {
    Array<int> a;
    for(int i=0; i<5; i++) {
        a.push_front(i+1);
        a.push_back(i+1);
    }
    a.display();
    cout << a.getCurrent() << endl;
    return 0;
}