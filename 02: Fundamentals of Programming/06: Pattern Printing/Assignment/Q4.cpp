/*
enter a number : 4
A B C D E F G 
A B C   E F G 
A B       F G 
A           G 
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
        cout << char(i + 64) << " ";
    }
    cout << endl;
    for (int i = 1; i <= num - 1; i++)
    {
        int a = 1;
        for (int j = 1; j <= num - i; j++)
        {
            cout << char(a + 64) << " ";
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
            cout << char(a + 64) << " ";
            a++;
        }
        cout << endl;
    }
    return 0;
}