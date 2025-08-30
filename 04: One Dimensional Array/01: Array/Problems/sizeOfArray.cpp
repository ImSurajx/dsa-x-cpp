// size of an array.
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 10, 123, 435};
    cout << "size of array is : " << sizeof(arr) / sizeof(arr[0]) << endl;
    return 0;
}