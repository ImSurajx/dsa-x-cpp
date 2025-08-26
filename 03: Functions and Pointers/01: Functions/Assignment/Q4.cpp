// Ques: waf to count the number of digits in a number then print the square of this number.
#include <iostream>
using namespace std;
int countDigit(int num)
{
    int count = 0;
    if (num == 0)
    {
        count++;
    }
    else
    {
        while (num > 0)
        {
            num /= 10;
            count++;
        }
    }

    return count;
}

int squareDigit(int num)
{
    return countDigit(num) * countDigit(num);
}

int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    cout << "total number of digit is : " << countDigit(num) << endl;
    cout << "square of total digit is : " << squareDigit(num) << endl;
    return 0;
}