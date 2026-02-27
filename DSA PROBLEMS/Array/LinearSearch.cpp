#include <iostream>
using namespace std;
int linearSearch(int *array, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            cout << "key found at index : " << i << endl;
            return i;
        }
    }
    cout << "key not found." << endl;
    return -1;
}
int main()
{
    int array[] = {12, 45, 7, 91, 23, 64, 10};
    int size = sizeof(array) / sizeof(int);
    int key = 23;

    linearSearch(array, size, key);

    return 0;
}