// wap to print the element of both the diagonal in a square matrix
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
            if (i == j || (i + j) == n - 1)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}