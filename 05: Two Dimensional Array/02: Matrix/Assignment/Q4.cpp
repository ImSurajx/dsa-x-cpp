// Ques : Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

#include <iostream>

using namespace std;

int main()

{

    int n, k = 1;

    cout << "enter n : ";

    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < n; j++)

        {

            arr[i][j] = k;

            k++;
        }
    }

    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < n; j++)

        {

            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    vector<int> v;

    // print matrix into spiral form

    int minRow = 0, maxRow = n - 1, minColumn = 0, maxColumn = n - 1;

    while ((minRow <= maxRow) && (minColumn <= maxColumn))

    {

        // right

        for (int i = minColumn; i <= maxColumn; i++)

        {

            v.push_back(arr[minRow][i]);
        }

        minRow++;

        // bottom

        for (int i = minRow; i <= maxRow; i++)

        {

            v.push_back(arr[i][maxColumn]);
        }

        maxColumn--;

        // left

        for (int i = maxColumn; i >= minColumn; i--)

        {

            v.push_back(arr[maxRow][i]);
        }

        maxRow--;

        // top;

        for (int i = maxRow; i >= minRow; i--)

        {

            v.push_back(arr[i][minColumn]);
        }

        minColumn++;
    }

    for (int i = 0; i < v.size(); i++)

    {

        cout << v[i] << " ";
    }

    cout << endl;

    return 0;
}