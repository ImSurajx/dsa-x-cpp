// Ques: given two numbers a & b, waf to priint all odd numbers between them.
#include <iostream>
using namespace std;

// print odd numbers b/w two numbers
void oddNumbers(int a, int b)
{
    if (a > b)
    {
        oddNumbers(b, a);
    }
    else
    {
        for (int i = a; i <= b; i++)
        {
            if (i % 2 != 0)
            {
                cout << i << endl;
            }
        }
    }
}
int main()
{
    int a, b;
    cout << "enter a : ";
    cin >> a;
    cout << "enter b : ";
    cin >> b;
    oddNumbers(a, b);
    return 0;
}