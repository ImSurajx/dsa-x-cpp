#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        // using addition variable
        // int a = 1;
        // for (int j = 1; j <= i; j++)
        // {
        //     cout << a << " ";
        //     a += 2;
        // }
        // using maths
        for (int j = 1; j <= 2 * i - 1; j += 2)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}