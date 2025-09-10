// Ques: write a program to print the matrix in wave form.
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
    for (int i = 0; i < m; i++) // -> taking input.
    {
        // where i -> rows.
        for (int j = 0; j < n; j++)
        {
            // where j -> columns.
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {

        if (i % 2 == 0)
        {
            int k = 0;
            int l = n - 1;
            while (k <= l)
            {
                swap(arr[i][k], arr[i][l]);
                k++;
                l--;
            }
        }
    }
    cout << "array in wave form : " << endl;
    for (int i = 0; i < m; i++) // --> prinitng matrix/2d array.
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}