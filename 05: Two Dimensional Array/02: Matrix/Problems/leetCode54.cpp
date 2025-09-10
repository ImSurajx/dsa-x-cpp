// Ques: Print the Spiral...
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter rows : ";
    cin >> m;
    cout << "enter columns : ";
    cin >> n;
    int matrix[m][n];
    cout << "enter elements : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    cout << "matrixay in spiral form : " << endl;
    int minRow = 0, maxRow = m - 1, minColumn = 0, maxColumn = n - 1;
    while ((minRow <= maxRow) && (minColumn <= maxColumn))
    {
        // right
        for (int i = minColumn; i <= maxColumn; i++)
        {
            cout << matrix[minRow][i] << " ";
        }
        minRow++;
        // Down
        for (int i = minRow; i <= maxRow; i++)
        {
            cout << matrix[i][maxColumn] << " ";
        }
        maxColumn--;
        // left
        if (minRow <= maxRow)
        {
            for (int i = maxColumn; i >= minColumn; i--)
            {
                cout << matrix[maxRow][i] << " ";
            }
            maxRow--;
        }
        // up
        if (minColumn <= maxColumn)
        {
            for (int i = maxRow; i >= minRow; i--)
            {
                cout << matrix[i][minColumn] << " ";
            }
            minColumn++;
        }
    }

    return 0;
}
