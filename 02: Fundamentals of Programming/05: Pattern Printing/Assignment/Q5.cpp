/*
* 
* * 
* * * 
* * * * 
* * * 
* * 
* 
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
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j < num - i + 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}