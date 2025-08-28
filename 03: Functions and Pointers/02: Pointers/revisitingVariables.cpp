#include <iostream>
using namespace std;
int main()
{
    // 1byte -> 8bits, 1kb -> 1024bytes
    // int -> 4byte, bool -> 1byte, flag->4byte, char-> 1byte
    // formula to calculate total value store in a data type : 2^(byte*8)
    cout << "size of int : " << sizeof(int) << endl;
    cout << "size of bool : " << sizeof(bool) << endl;
    cout << "size of char : " << sizeof(char) << endl;
    cout << "size of float : " << sizeof(float) << endl;
    char x;
    cout << x << endl;
    cout << &x << endl; // 0x16b83edf8 : address of variable x.
    x = 'x';
    cout << &x << endl;
    return 0;
}