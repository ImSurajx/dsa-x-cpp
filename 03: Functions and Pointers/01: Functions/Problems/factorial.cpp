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

int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << factorial(i) << endl;
    }

    return 0;
}