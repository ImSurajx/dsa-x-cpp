/*
enter number : 5
*               * 
* *           * * 
* * *       * * * 
* * * *   * * * * 
* * * * * * * * * 
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
    int n;
    cout << "enter number : ";
    cin >> n;
    int nsp = -1;
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    // upper part
    for(int i = 1; i < n-1; i++){
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"* ";
        }
        nsp+=2;
        for(int k = 1; k <= nsp; k++){
            cout<<"  ";
        }
        for (int l = 1; l <= n-i; l++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    nsp = (2 * n) - 3;
    // lower part
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        for (int k = 1; k <= nsp; k++)
        { 
            cout << "  ";
        }
        nsp -= 2;
        for (int l = 1; l <= i; l++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= 1; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    

    return 0;
}