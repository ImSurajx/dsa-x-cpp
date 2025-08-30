#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "enter total number of elements : ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter element : ";
    cin >> x;
    // travesing array
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < x)
        {
            count++;
        }
    }
    cout << x << " is greater than " << count << " numbers. " << endl;
    return 0;
}