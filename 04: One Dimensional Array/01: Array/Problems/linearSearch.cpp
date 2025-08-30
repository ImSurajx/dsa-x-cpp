// Ques: find the element x in the array. take array and x as input.
// Ques: calculate the sum of all the elements in the given array.
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
    cout << "enter element that you want to find : ";
    cin >> x;
    // travesing array
    bool flag = false; // check mark
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "element found." << endl;
    }
    else
    {
        cout << "element not found." << endl;
    }

    return 0;
}