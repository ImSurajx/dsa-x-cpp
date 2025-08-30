// Ques: Calculate the product of all the elements in the given array.
#include <iostream>
using namespace std;
int main()
{
    int n, product = 1;
    cout << "enter total number of elements : ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        product *= arr[i];
    }
    cout << "product of the elements of given array is : " << product << endl;
    return 0;
}