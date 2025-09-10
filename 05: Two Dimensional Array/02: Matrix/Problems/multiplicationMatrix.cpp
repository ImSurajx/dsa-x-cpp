#include <iostream>
using namespace std;
int main()
{
    /*
    - Matrix :
    - first matrix: m rows & n colums
    - second matrix: p rows & q columns
    Rule 1:
    - columns of first matrix n must be equal to rows of second matrix (n = p);
    - A x B != B x A in matrix
    Rule 2:
    - after multiplication the new order of matrix will be (m x q).
    - where m = rows of first matrix
    - where q = columns of second matrix
    */
    int m, n, p, q;
    cout << "enter rows of first matrix : ";
    cin >> m;
    cout << "enter columns of first matrix : ";
    cin >> n;
    cout << "enter rows of second matrix : ";
    cin >> p;
    cout << "enter columns of second matrix : ";
    cin >> q;
    if (n == p)
    {
        int matrix1[m][n];
        int matrix2[p][q];
        cout << "enter elements of first matrix : " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix1[i][j];
            }
        }
        cout << "enter elements of second matrix : " << endl;
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> matrix2[i][j];
            }
        }
        // resultant matrix
        // res[i][j] = a[i][0]*b[0][j] + a[i][1] * b[1][j] + ....
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int r = 0; r < p; r++)
                {
                    res[i][j] += matrix1[i][r] * matrix2[r][j];
                }
            }
        }
        // printing resultent  matrix.
        cout << "multiplication will be : " << endl;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "matrix multiplication is not possible." << endl;
    }
    return 0;
}