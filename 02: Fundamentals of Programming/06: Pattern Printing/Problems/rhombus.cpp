/*
enter a number : 5
        * * * * * 
      * * * * * 
    * * * * * 
  * * * * * 
* * * * * 
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int k = 1; k <= num  - i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= num; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}