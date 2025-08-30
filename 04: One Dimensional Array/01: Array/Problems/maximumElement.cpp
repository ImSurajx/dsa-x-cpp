// Ques: find the maximum value out of all the element in the array.
#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n, max;
    cout << "enter no of elements : ";
    cin >> n;
    int arr[n];
    cout << "enter element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "the maximum value is : " << max << endl;
    return 0;
}