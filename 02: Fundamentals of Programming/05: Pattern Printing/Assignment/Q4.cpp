/*
A 
1 2 
A B C 
1 2 3 4 
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
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 != 0)
            {
                cout << char(j + 64) << " ";
            }
            else
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}