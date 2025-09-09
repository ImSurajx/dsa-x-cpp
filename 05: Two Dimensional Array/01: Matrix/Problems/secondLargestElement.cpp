// Ques: wap to find the seocond largest element of a given 2D array of integers.
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter rows : ";
    cin >> m;
    cout << "enter columns : ";
    cin >> n;
    int arr[m][n];
    cout << "enter elements : ";
    for (int i = 0; i < m; i++) // -> taking input.
    {
        // where i -> rows.
        for (int j = 0; j < n; j++)
        {
            // where j -> columns.
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++) // --> prinitng matrix/2d array.
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            smax = max;
            if (max < arr[i][j]) max = arr[i][j];
        }
    }
    cout << "largest element of the array is : " << max << endl;
    cout << "second largest element of the array is : " << smax << endl;
    return 0;
}