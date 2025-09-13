//  Given an matrix mxn integer matrix, if an element is 0, set entire row & column to 0's
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    cout << "enter rows : ";
    cin >> m;
    cout << "enter columns : ";
    cin >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "enter elements : " << endl;
    for (int i = 0; i < m; i++) // -> taking input.
    {
        // where i -> rows.
        for (int j = 0; j < n; j++)
        {
            // where j -> columns.
            cin >> matrix[i][j];
        }
    }
    vector<bool> rows(m, false);
    vector<bool> cols(n, false);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }
    // placing 0's at rows
    for (int i = 0; i < rows.size(); i++)
    {
        if (rows[i] == true)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = 0;
            }
        }
    }
    // placing 0's at columns
    for (int i = 0; i < cols.size(); i++)
    {
        if (cols[i] == true)
        {
            for (int j = 0; j < m; j++)
            {
                matrix[j][i] = 0;
            }
        }
    }
    cout << "matrix is : " << endl;
    for (int i = 0; i < m; i++) // --> prinitng matrix/2d matrixay.
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}