// Ques: calculate the sum of all the elements in the given array.
#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "enter total number of elements : ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "sum of the elements of given array is : " << sum << endl;
    return 0;
}