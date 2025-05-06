#include <iostream>
#include <vector>
using namespace std;
int main () {
    vector<int> vec = {1, 2 ,3};
    for(int val : vec) {
        cout << val << " "; // 1, 2, 3
    }
    cout << endl;
    cout << "Size : " << vec.size() << endl; // 3
    cout << "Capacity : " << vec.capacity() << endl;  // 3

    cout << "\nAter push back (5) : \n";
    vec.push_back(4);
    for(int val : vec) {
        cout << val << " "; // 1, 2, 3, 4
    }
    cout << endl;
    cout << "Size : " << vec.size() << endl; // 4
    cout << "Capacity : " << vec.capacity() << endl; // 6

    cout << "\nAter push back (5) and (6) : \n";
    vec.push_back(5); 
    vec.push_back(6);
    for(int val : vec) {
        cout << val << " "; // 1, 2, 3, 4, 5, 6
    }
    cout << endl;
    cout << "Size : " << vec.size() << endl; // 6
    cout << "Capacity : " << vec.capacity() << endl; // 6

    cout << "\nAter push back (7) : \n";
    vec.push_back(7); 
    for(int val : vec) {
        cout << val << " "; // 1, 2, 3, 4, 5, 6, 7
    }
    cout << endl;
    cout << "Size : " << vec.size() << endl; // 7
    cout << "Capacity : " << vec.capacity() << endl; // 12

    return 0;
}