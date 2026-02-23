#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World" << endl;
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(int);
    cout << size << endl;

    // Access the element
    cout << array[2] << endl;

    // loop to print elements
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // range base
    for (int i : array)
    {
        cout << i << " ";
    }

    // 2D Array
    int matrix[2][2] = {{1, 2}, {3, 4}};
    // print 2D array
    for (int row = 0; row < 2; row++)
    {
        for (int ele = 0; ele < 2; ele++)
        {
            cout << matrix[row][ele] << endl;
        }
    }

    return 0;
}