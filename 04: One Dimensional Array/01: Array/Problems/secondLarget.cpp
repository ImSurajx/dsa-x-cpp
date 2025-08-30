// Ques: find the maximum value out of all the element in the array.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max, smax;
    cout << "enter no of elements : ";
    cin >> n;
    int arr[n];
    cout << "enter element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = INT_MIN;
    smax = INT_MIN;
    // calculating maximum
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    // calculating second max
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && arr[i] > smax)
            smax = arr[i];
    }
    cout << "the maximum value is : " << max << endl;
    cout << "the  second maximum value is : " << smax << endl;
    return 0;
}