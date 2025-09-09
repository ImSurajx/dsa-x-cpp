// Ques: wap to print sum of all the elements of a 2D matrix
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter rows : ";
    cin >> m ;
    cout << "enter columns : ";
    cin >> n;
    int arr[m][n];
    int brr[m][n];
    cout << "enter elements of first matrix : ";
    for (int i = 0; i < m; i++) // -> taking input.
    {
        // where i -> rows.
        for (int j = 0; j < n; j++)
        {
            // where j -> columns.
            cin >> arr[i][j];
        }
    }
    cout << "enter elements of second matrix : ";
    for (int i = 0; i < m; i++) // -> taking input.
    {
        // where i -> rows.
        for (int j = 0; j < n; j++)
        {
            // where j -> columns.
            cin >> brr[i][j];
        }
    }
    int res[m][n];
    for (int i = 0; i < m; i++) // --> prinitng matrix/2d array.
    {
        for (int j = 0; j < n; j++)
        {
            res[i][j] = arr[i][j] + brr[i][j];
        }
        cout << endl;
    }
    cout<<"sum of matrix is : "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}