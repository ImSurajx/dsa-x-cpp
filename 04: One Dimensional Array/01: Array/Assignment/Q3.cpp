// Ques: find the minimum value out of all elements in the array
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, min;
    cout << "enter no of elements : ";
    cin >> n;
    int arr[n];
    cout << "enter element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "the minimum value is : " << min << endl;
    return 0;
}