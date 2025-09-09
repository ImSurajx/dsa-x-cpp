#include <iostream>
using namespace std;
int main()
{   // declaration
    int arr[3][3];
    // initlization
    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // total 9x9 block of int data type will be allocated
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // total 9x9 block of int data type will be allocated
    // int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // row -> 3 (0->2), columns -> 3 (0->2)
    // traversal through 2D array.
    for (int i = 0; i < 3; i++) // -> taking input.
    { 
        // where i -> rows.
        for(int j = 0; j < 3; j++){
            // where j -> columns.
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) // --> prinitng matrix/2d array.
    {
        for(int j = 0; j < 3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}