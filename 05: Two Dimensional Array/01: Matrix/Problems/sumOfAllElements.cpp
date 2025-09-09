// Ques: wap to print sum of all the elements of a 2D matrix
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
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "sum of the elements of the array is : " << sum << endl;
    return 0;
}