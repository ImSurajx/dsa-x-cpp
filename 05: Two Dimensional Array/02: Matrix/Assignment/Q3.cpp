// wap to print the matrix in wave form
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
    cout << "enter elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "array in wave form (columns) : " << endl;
    for (int i = 0; i < m; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
    return 0;
}
