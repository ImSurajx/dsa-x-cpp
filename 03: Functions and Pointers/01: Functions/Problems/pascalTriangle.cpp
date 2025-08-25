// Ques: Print Pascal Triangle.
#include <iostream>
using namespace std;

// a function that calculate permutation.
int factorial(int n)
{
    int product = 1;
    if (n == 0)
    {
        product = 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            product *= i;
        }
    }
    return product;
}

// a function which calulate combination.
int combination(int n, int r)
{
    int comb = factorial(n) / (factorial(r) * factorial(n - r));
    return comb;
}

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    // printing pascal triangle.
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}