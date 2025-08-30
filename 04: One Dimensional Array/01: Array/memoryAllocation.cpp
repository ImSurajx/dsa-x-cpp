// size of an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<&arr<<endl; // array address == address of arr[0]
    /*
    if we cout :
    arr, &arr, arr[0] -> address of array / address of first element of array
    */
    for (int i = 0; i < 5; i++)
    {
        cout << &arr[i] << endl;
    }
    // 0x16f7c2e04 04 : this is the address of first byte of the variable.
    // 0x16f7c2e08 08 : this is the address of first byte of the variable.
    // 0x16f7c2e0c 0c : this is the address of first byte of the variable.
    // 0x16f7c2e10 e0 : this is the address of first byte of the variable.
    // 0x16f7c2e14 e4 : this is the address of first byte of the variable.
    return 0;
}