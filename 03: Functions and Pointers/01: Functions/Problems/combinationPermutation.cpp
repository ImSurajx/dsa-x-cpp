// ques: calculate permuation or combination
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

// a function which calulate permutation.
int permutation(int n, int r)
{
    int permu = factorial(n) / (factorial(n - r));
    return permu;
}

int main()
{
    int n, r;
    cout << "enter n : ";
    cin >> n;
    cout << "enter r : ";
    cin >> r;
    cout << "permutation is : " << permutation(n, r) << endl;
    cout << "combination is : " << combination(n, r) << endl;
    return 0;
}