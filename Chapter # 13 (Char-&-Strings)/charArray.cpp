#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char stl[] = {'a', 'b', 'c', 'd', '\0'};
    char str[] = "code";

    cout << stl[0] << endl;
    cout << stl[1] << endl;
    cout << stl[2] << endl;
    cout << stl[3] << endl;
    cout << stl[4] << endl;

    // the name of the char arrat point the whole char array it in the case of int array when we print the name of array it prints the memory address of the first element in the char array but in the case of character array when we print the name of the charater array it prints the whole string.
    // for example :
    
    cout << stl << endl;
    cout << strlen(stl) << endl;
    return 0;
}

// character array is used to store the strings
// Strings: written in double quotes
// "hello", "code", "hello World" --> these are called string litterals
// In the character array null character are addes at the end for termination but there is no in the strings
// we can fint the length of the array using finction strlen(charArray_name) it does not count the null character 
// if we forget to store the null character at the end of the character array yje rremaining indices store the garbage value like array[30] = {'a', 'b', 'c', 'd'} in tis case i dont define the null character the remaing store garbage value.
