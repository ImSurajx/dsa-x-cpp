// Ques: Print the nth fibonacci number
#include <iostream>
using namespace std;
int main()
{
    int firstTerm = 1;
    int secondTerm = 1;
    cout << "enter n : ";
    int n;
    cin >> n;
    int nTerm;
    nTerm = firstTerm + secondTerm;
    cout << "the fibonacci series is : ";
    if (n < 1)
    {
        // Handle invalid input (n should be at least 1)
        cout << "Please enter a positive integer." <<endl;
        return 0;
    }
    if (n >= 1)
    {
        cout << firstTerm << " ";
    }
    if (n >= 2)
    {
        cout << secondTerm << " ";
    }
    for (int i = 3; i <= n; i++)
    {
        nTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nTerm;
        cout << nTerm << " ";
    }
    cout << endl;
    return 0;
}