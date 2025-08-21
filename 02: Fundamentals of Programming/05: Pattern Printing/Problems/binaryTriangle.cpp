/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int a = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else if ((i + j) % 2 != 0)
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}