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
    cout << "array in spiral form : " << endl;
    int minRow = 0, maxRow = m - 1, minColumn = 0, maxColumn = n - 1;
    while ((minRow <= maxRow) && (minColumn <= maxColumn))
    {
        // right
        for (int i = minColumn; i <= maxColumn; i++)
        {
            cout << arr[minRow][i] << " ";
        }
        minRow++;
        // Down
        for (int i = minRow; i <= maxRow; i++)
        {
            cout << arr[i][maxColumn] << " ";
        }
        maxColumn--;
        // left
        for (int i = maxColumn; i >= minColumn; i--)
        {
            cout << arr[maxRow][i] << " ";
        }
        maxRow--;
        // up
        for (int i = maxRow; i >= minRow; i--)
        {
            cout << arr[i][minColumn] << " ";
        }
        minColumn++;
    }

    return 0;
}
