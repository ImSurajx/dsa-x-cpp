// Ques: write a function to compute the greatest common divisor of two given numbers.
#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    int x = min(a, b);
    while (x > 0)
    {
        if (a % x == 0 && b % x == 0)
        {
            return x;
        }
        x--;
    }
    return x;
}

int main()
{
    int a, b;
    cout << "enter first num : ";
    cin >> a;
    cout << "enter second num : ";
    cin >> b;
    cout << "the greatest common divisor is : " << hcf(a, b) << endl;
    return 0;
}