/*
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    // for (int i = 1; i <= num; i++)
    // {
    //     // spaces
    //     for (int j = 1; j <= num - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     // star
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if ((i + j) >= num + 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}