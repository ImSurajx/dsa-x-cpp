// Ques: waf to print square of n natural numbers.
#include <iostream>
using namespace std;

// square function
int square(int n)
{
    return n * n;
}

// function which calculate square of n numbers.
void nsquare(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << square(i) << endl;
    }
}

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    nsquare(n);
    return 0;
}