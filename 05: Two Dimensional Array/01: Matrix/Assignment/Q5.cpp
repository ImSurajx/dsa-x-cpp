// wap to print the row number having the maximum sum in a given matrix
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
    int max = INT_MIN;
    int sum, idx = -1;
    for (int i = 0; i < m; i++) // -> taking input.
    {
        sum = 0;
        // where i -> rows.
        for (int j = 0; j < n; j++)
        {
            // where j -> columns.
            cin >> arr[i][j];
        }
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if (sum > max)
        {
            idx = i;
            max = sum;
        }
    }
    cout << "array is : " << endl;
    for (int i = 0; i < m; i++) // --> prinitng matrix/2d array.
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "the " << idx << "nd row has the maximum sum i.e : " << max << endl;
    return 0;
}