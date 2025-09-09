// Ques: Given a matrix 'A' of dimension nxm and 2 coordinates (i1,r1) and (i2,r2) return the sum of rectangle from (i1,r2) to (i2, r2).
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
    cout << "enter rows from to rows to : ";
    int x, y;
    cin >> x >> y;
    cout << "enter colums from to columns to : ";
    int o, p;
    cin >> o >> p;
    for (int i = x; i <= y; i++)
    {
        for (int j = o; j <= p; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "the sum of rectange from custom points : " << sum << endl;
    return 0;
}