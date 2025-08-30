// Ques: given an array, predict if the array contains duplicates or not.
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
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
    }
    if (flag)
    {
        cout << "duplicates present." << endl;
    }
    else
    {
        cout << "there is no duplicates present." << endl;
    }
    return 0;
}