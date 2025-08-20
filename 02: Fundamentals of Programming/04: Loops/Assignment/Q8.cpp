// Print first 'n'fibonacci numbers.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n : ";
    cin >> n;
    int firstTerm = 1, secondTerm = 1;
    int nthTerm;
    if (n == 0)
    {
        cout << "please enter a valid input." << endl;
    }
    else
    {
        if (n >= 0)
        {
            cout << firstTerm << " ";
        }
        if (n >= 1)
        {
            cout << secondTerm << " ";
        }
        for (int i = 3; i <= n; i++)
        {
            nthTerm = firstTerm + secondTerm;
            cout << nthTerm << " ";
            firstTerm = secondTerm;
            secondTerm = nthTerm;
        }
        cout << endl;
    }
    return 0;
}