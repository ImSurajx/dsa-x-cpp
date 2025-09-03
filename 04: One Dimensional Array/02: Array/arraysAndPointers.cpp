#include <iostream>
using namespace std;
int main()
{
    // using pointer we can modify or update arrays values
    int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr; // giving address
    int *ptr = &arr[0]; // giving address
    // int *ptr1 = &arr;   // error
    // int *ptr2 = arr[0]; // error
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << ptr[i] << " ";
    // }

    // printing values usin pointer.
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = arr;

    *ptr = 3;  // ptr[0] = arr[0] = 3
    ptr++;     // ptr++ == arr[1]
    *ptr = 9;  // ptr[1] = arr[1] = 9
    ptr = arr; // ptr--;
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << ptr[i] << " "; // i[ptr], i[arr]
    }

    return 0;
}