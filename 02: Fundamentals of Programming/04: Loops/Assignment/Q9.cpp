// wap to print out all armstrong numbers between 1 and 500,
// if the sum of cubes of each digit of the number is equal to the number itslef the number called an Armstrong number.
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 2000; i++)
    {
        int sum = 0, temp = i;
        while (temp > 0)
        {
            int digit = temp % 10;
            sum += (digit * digit * digit);
            temp /= 10;
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}