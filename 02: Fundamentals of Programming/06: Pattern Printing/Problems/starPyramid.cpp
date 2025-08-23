/*
enter a number : 4
      *
    * * *
  * * * * *
* * * * * * *
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    // int a = 1;
    // for (int i = 1; i <= num; i++)
    // {

    //     for (int k = 1; k <= num - i; k++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= a; j++)
    //     {
    //         cout << "* ";
    //     }
    //     a += 2;
    //     cout << endl;
    // }
    int nst = 1, nsp = num - 1;
    for (int i = 1; i <= num; i++)
    { // for spaces
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
        }
        nsp--;
        // for stars
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        nst += 2;
        cout << endl;
    }
    return 0;
}