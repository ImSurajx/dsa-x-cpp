// Ques: wap to print sum of digits of a given number.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int store = num;
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    if (store == 0)
    {
        cout << "sum of digits is : 0" << endl;
    }
    else
    {
        cout << "sum of digits is : " << sum << endl;
    }
    return 0;
}