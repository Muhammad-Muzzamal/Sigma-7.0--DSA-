#include <iostream>
using namespace std;
void display(char &ch) {
    cout << ch << endl;
}
void ASCII(char &ch) {
    int num = ch;
    cout << "ASCII : " << num << endl;
}
int main() {
    char char1 = 'a';
    display(char1);
    char char2 = '2';
    display(char2);
    char char3 = 'A';
    display(char3);
    ASCII(char3);
    return 0;
}
// we know the data is stored in memory in the form of binary digits 
// char type values stored in ASCII values and then binary number
// ASCII --> American Standard Code for Information Interchange
// we can store characters from a --> z   || A-->Z  || Special characters like @,#,$,% etc
// we can also store numbers in the the char
// we can find the ASCII valies of character using datatype casting