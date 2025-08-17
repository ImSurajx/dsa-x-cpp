#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three numbers respectively: ";
    cin >> a >> b >> c;
    // a > b, a > c, a
    // b > a, b > c, b
    // c > a, c > b, c
    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is greatest."<<endl;
        }
        else
        {
            cout << c << " is greatest."<<endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << " is greatest."<<endl;
        }
        else
        {
            cout << c << " is greatest."<<endl;
        }
    }
    return 0;
}