// wap to print the sum of all even digits of given numbers.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int digit;
    int sum = 0;
    while (num > 0)
    {
        digit = num % 10;
        if (digit % 2 == 0)
        {
            sum += digit;
        }
        num = num / 10;
    }
    cout << "sum of even digits are : " << sum << endl;
    return 0;
}