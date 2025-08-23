/*
enter a number : 4
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
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
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}