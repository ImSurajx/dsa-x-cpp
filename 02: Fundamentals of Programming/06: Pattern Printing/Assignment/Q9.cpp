/*
enter a number : 5
        *
      * * *
    *   *   *
  *     *     *
* * * * * * * * *
  *     *     *
    *   *   *
      * * *
        *
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (((i + j) == (n + 1)) || ((j - i) == (n - 1)) || (j == n) || (i == n))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if ((i == j) || ((i + j) == (2 * n)) || (j == n))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}