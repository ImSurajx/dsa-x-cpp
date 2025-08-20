// wap to print sum of given number & it's reverse
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int storeInitail = num;
    // sum of initial number
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    // reversing the number.
    int reverseNum = 0;
    while (storeInitail > 0)
    {
        reverseNum *= 10;
        reverseNum += storeInitail % 10;
        storeInitail /= 10;
    }
    // sad: waste of time, i forgot the fact that the sum remains same even if a number get reversed.
    // sum of the reverse number.
    int sumReverse = 0;
    while (reverseNum > 0)
    {
        sumReverse += reverseNum % 10;
        reverseNum /= 10;
    }
    cout << "sum of number is : " << sum << endl;
    cout << "sum of reverse of the number is : " << sumReverse << endl;
    return 0;
}