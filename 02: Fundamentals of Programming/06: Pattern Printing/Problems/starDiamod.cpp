/*
enter n : 5
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include <iostream>
using namespace std;
int main()
{
    int n, nspt, nstt, nspl, nstl;
    cout << "enter n : ";
    cin >> n;
    // nspt = (n - 1);
    // nstt = 1;
    // nspl = 1;
    // nstl = (n * 2 - 1) - 2;

    // for (int i = 1; i <= (2 * n - 1); i++)
    // {
    //     // uppar part
    //     if (i <= n)
    //     {
    //         for (int j = 1; j <= nspt; j++)
    //         {
    //             cout << "  ";
    //         }
    //         nspt--;
    //         for (int k = 1; k <= nstt; k++)
    //         {
    //             cout << "* ";
    //         }
    //         nstt += 2;
    //         cout << endl;
    //     }
    //     else

    //         // lower part
    //         if (i > n)
    //         {
    //             for (int l = 1; l <= nspl; l++)
    //             {
    //                 cout << "  ";
    //             }
    //             nspl++;
    //             for (int m = 1; m <= nstl; m++)
    //             {
    //                 cout << "* ";
    //             }
    //             nstl -= 2;
    //             cout << endl;
    //         }
    // }
    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= (2 * n - 1); i++)
    {
        // spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        if (i <= n - 1)
            nsp--;
        else
            nsp++;
        // stars
        for (int k = 1; k <= nst; k++)
        {
            cout << "* ";
        }
        if (i <= n - 1)
            nst += 2;
        else
            nst -= 2;
        cout << endl;
    }
    return 0;
}