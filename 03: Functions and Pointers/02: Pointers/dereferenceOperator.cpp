// (*variableName) Star Operator (Dereference Operator) : through this we are able to acess & update the value of variables.
#include <iostream>
using namespace std;
int main()
{
    int x = 120;
    int *p = &x;
    cout << p << endl;
    cout << *p << endl; // access of the variable through pointer variable.
    *p = 40;
    cout << x << endl;
    cout << *p << endl; // updation of the variable through pointer variable.
}