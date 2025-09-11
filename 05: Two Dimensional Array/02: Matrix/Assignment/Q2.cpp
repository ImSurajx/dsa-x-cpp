// Ques: wap to rotate a matrix by 90 degree anti-clockwise;
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int j = 0; j < n; j++)
    {
        int l = 0;
        int k = m - 1;
        while (l <= k)
        {
            swap(arr[l][j], arr[k][j]);
            l++;
            k--;
        }
    }

    cout << "matrix after 90 degrees anti-clockwiase rotation : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}