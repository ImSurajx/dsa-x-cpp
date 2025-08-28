// Preditct the output of following code snippet
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    int *ptr = &a;                                // store address of a variable
    b = *ptr + 1;                                 // *ptr + 1 equivalent to 10+1 = 11
    ptr = &b;                                     // store address of b varaible.
    cout << *ptr << ' ' << a << ' ' << b << endl; // 11 10 11
    return 0;
}