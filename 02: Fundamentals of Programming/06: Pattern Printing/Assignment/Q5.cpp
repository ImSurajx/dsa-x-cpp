/*
enter number : 3
1 2 3 2 1 
1 2   2 1 
1       1 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    int a = n;
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        if (i <= n)
        {
            cout << i << " ";
        }
        else if (i >= n)
        {
            cout << --a << " ";
        }
    }
    cout << endl;

    for (int i = 1; i <= n - 1; i++)
    {
        int a = n - i;
        for (int j = 1; j <= n - i; j++)
        {
            cout << j << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= n - i; l++)
        {
            cout << a-- << " ";
        }
        cout << endl;
    }
    return 0;
}