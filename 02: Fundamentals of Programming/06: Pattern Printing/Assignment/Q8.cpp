/*
enter a number : 4
      1       
    2   2     
  3       3   
4           4 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {   
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (((i + j) == (n + 1)) || ((j - i) == (n - 1)))
            {
                cout << a <<" ";
                
            }
            else
            {
                cout << "  ";
            }
        }
        a++;
        cout << endl;
    }
    return 0;
}