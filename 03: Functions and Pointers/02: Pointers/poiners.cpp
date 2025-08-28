#include <iostream>
using namespace std;
int main()
{
    // declaration:
    // we store any variable adress by using pointer : data_type* pointer_name;
    bool x = true;
    bool *p = &x;
    cout << &x << endl;
    cout << p << endl;  // p is variable wich store address of variable
    cout << &p << endl; // pointer also has it's own address.
    return 0;
}