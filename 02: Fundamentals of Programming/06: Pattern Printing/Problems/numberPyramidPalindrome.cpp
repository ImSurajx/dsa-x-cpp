/*
enter a number : 4
      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 
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
        int a = i;
        for (int j = 1; j <= num - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        for (int l = 1; l <= i - 1; l++) // int l = i-1; l>=1; l++
        {
            cout << --a << " "; // cout<<l<<" ";
        }
        cout << endl;
    }

    return 0;
}