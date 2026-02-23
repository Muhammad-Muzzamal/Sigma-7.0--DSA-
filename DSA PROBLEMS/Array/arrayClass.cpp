#include <iostream>
using namespace std;

// Array class
class Array
{
private:
    int size;
    int *array;
    int length;

public:
    Array(int size)
    {
        this->size = size;
        array = new int[size];
        length = 0;
        cout << "New Array is created with size : " << size << endl;
    }
    // print an array
    void print()
    {
        for (int i = 0; i < length; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
    int getSize()
    {
        return this->size;
    }
    int getLength()
    {
        return length;
    }
    void push_back(int ele)
    {
        if (length == size)
        {
            cout << "Array has no capacity." << endl;
            return;
        }
        array[length] = ele;
        length++;
    }
    int pop_back()
    {
        if (this->length == 0)
        {
            cout << "Array is empty\n";
            return -1;
        }
        int num = array[length - 1];
        length--;
        return num;
    }
};

main()
{
    Array array(10);
    cout << "Length : " << array.getLength() << endl;
    cout << "Size : " << array.getSize() << endl;
    
    for (int i = 0; i < array.getSize(); i++)
    {
        array.push_back(i);
    }
    array.print();
    
    array.pop_back();
    cout << "Length : " << array.getLength() << endl;
    array.print();

    return 0;
}