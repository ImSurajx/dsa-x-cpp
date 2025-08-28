// double pointer : used to store address of single pointer.
// triple pointer : used to store address of triple pointer & so on.
#include <iostream>
using namespace std;
int main()
{
    int x = 5;
    int *ptr = &x;
    int **doublePtr = &ptr;
    cout << x << endl;
    cout << ptr << endl;
    cout << doublePtr << endl;
    cout << *ptr << endl;        // print value at the address of x variable
    cout << *doublePtr << endl;  // print the value at the address of ptr
    cout << **doublePtr << endl; // print the value at the address of x.
    return 0;
}