#include <iostream>
#include <vector>
using namespace std;
void evalRPN(vector<string> &tokens)
{
    for (string s : tokens)
    {
        cout << int(s[0] - '0') << " ";
    }
    cout << endl;
}
int main()
{
    vector<string> tokens = {"2","1","+","3","*"};
    evalRPN(tokens);
    return 0;
}