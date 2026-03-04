#include <iostream>
#include <vector>
#include <string> // Required for stoi

using namespace std;

void evalRPN(vector<string> &tokens)
{
    for (string s : tokens)
    {
        // Check if the string is a number (and not an operator like "+" or "*")
        if (isdigit(s[0]) || (s.size() > 1 && s[0] == '-')) {
            int val = stoi(s); 
            cout << val << " ";
        } else {
            cout << s << " "; // Print the operator as is
        }
    }
    cout << endl;
}

int main()
{
    vector<string> tokens = {"2","1","+","3","*"};
    evalRPN(tokens);
    return 0;
}