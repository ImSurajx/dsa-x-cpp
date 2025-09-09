// Ques: wap to print the transpose of the matrix entered by the user and store it in a new matrix;
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter row & column : ";
    cin >> m >> n;
    int arr[m][n];
    cout << "enter elements of matrix : ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "matrix is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // store transpose of matrix (column wise printing);
    cout << "transpose is : " << endl;
    int brr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            brr[i][j] = arr[j][i];
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}