// predict the output:
#include <iostream>
using namespace std;
int main()
{
    int test = 0;
    cout << "First character " << '1' << endl;               // 1
    cout << "Second character " << (test ? 3 : '1') << endl; // 49
    return 0;
    // Why is '1' Converted to 49?
    // '1' is a char
    // Ternary operator ? : returns either an int or a char
    // In (test ? 3 : '1'), one side is int (3) and the other is char ('1')
    // In such mixed expressions, C++ promotes the char to int to match the other type
}