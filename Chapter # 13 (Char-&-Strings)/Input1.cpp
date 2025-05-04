#include <iostream>
#include <cstring>
using namespace std;
int main() {
    // char word[30];
    // cout << "Enter the word : ";
    // cin >> word;
    // cout << "You enter : " << word << endl;
    // cout << "Length : " << strlen(word) << endl;
    char sentence[50];
    cout << "Please enter the sentence : ";
    cin.getline(sentence, 50, '.');
    cout << "you enter :" << sentence << endl;
    cout << "Program terminate.....BYE BYE" << endl;
    return 0;
}
// cin ginore the word/char after the space 