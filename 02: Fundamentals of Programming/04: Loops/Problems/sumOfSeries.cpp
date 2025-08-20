// Ques: Print the sum of this series: 1-2+3-4+5-6... upto n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    // there are total two ways of solving this question.
    // without maths
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }
    cout << "sum of the series is : " << sum << endl;
    // with maths;
    /*
    difference of pair is : -1,
    ex: (1-2)+(3-4)+(5-6) = -3
        so if number is even then sum of sereis is -n/2
        but if it's odd so it will be (-n/2) + n;
        (1-2)+(3-4)+(5-6)+7 = 4
    */
    int sumMath = 0;
    if (n % 2 == 0)
    {
        cout << "sum of the series is : " << -1 * (n / 2) << endl;
    }
    else
    {
        cout << "sum of the series is : " << (-1 * (n / 2) + n) << endl;
    }
    return 0;
}