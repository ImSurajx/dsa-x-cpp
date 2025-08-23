/*
enter a number : 6
          A
        B A B
      C B A B C
    D C B A B C D
  E D C B A B C D E
F E D C B A B C D E F
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
        for (int k = i; k >= 1; k--)
        {
            cout << char(k + 64) << " ";
        }
        for (int l = 1; l <= i - 1; l++)
        {
            cout << char(l + 65) << " ";
        }

        cout << endl;
    }

    return 0;
}