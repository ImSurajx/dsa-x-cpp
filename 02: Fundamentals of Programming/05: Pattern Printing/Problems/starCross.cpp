/*
*       * 
  *   *   
    *     
  *   *   
*       * 
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num : ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "please enter a odd number." << endl;
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            for (int j = 1; j <= num; j++)
            {
                if (i == j || i + j == num+1)
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
    }

    return 0;
}