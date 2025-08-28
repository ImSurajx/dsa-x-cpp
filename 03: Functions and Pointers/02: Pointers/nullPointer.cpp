#include <iostream>
using namespace std;
int main()
{
    int *ptr = NULL;      // 0 : 0x0
    int *ptr = 0;         // 0 : 0x0
    int *ptr = '\0';      //  '\0' -> null character : 0x0
    cout << ptr << endl;  // 0x0
    cout << &ptr << endl; // address of ptr
    cout << *ptr << endl; // zsh: segmentation fault
    return 0;
}