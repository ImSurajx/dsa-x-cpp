// Ques: if the marks of A, B and C are input through the keyboard, wap to determine the student scoring least marks.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter marks of three students respectively : ";
    cin >> a >> b >> c;
    if (a < b)
    {
        if (a < c)
        {
            cout << a << " is least marks."<<endl;
        }
        else
        {
            cout << c << " is least marks."<<endl;
        }
    }
    else
    {
        if (b < c)
        {
            cout << b << " is least marks."<<endl;
        }
        else
        {
            cout << c << " is least marks."<<endl;
        }
    }
    return 0;
}