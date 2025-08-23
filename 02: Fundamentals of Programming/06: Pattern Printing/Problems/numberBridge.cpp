/*
enter a number : 5
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int nsp = 1;
    for (int i = 1; i <= (2 * num - 1); i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= num - 1; i++)
    {
        int a = 1;
        for (int j = 1; j <= num - i; j++)
        {
            cout << a << " ";
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
            a++;
        }
        nsp += 2;
        for (int l = 1; l <= num - i; l++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}