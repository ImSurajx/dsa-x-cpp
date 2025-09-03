#include <iostream>
using namespace std;
void display(int a[], int size) // int* a
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void change(int b[], int size) // int* b
{
    b[0] = 100;
}

int main()
{
    int arr[5] = {1, 4, 2, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    // accessing the elements of array while passing in another function
    // updation, pass by value / reference? -> reference
    display(arr, size);
    change(arr, size);
    display(arr, size);
    return 0;
}