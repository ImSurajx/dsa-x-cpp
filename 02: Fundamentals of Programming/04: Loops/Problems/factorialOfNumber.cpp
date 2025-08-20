// Ques: Print the factorial of a given number;
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int factorial = 1;
    int store = num;
    while (num > 0)
    {
        factorial *= num;
        num--;
    }
    if (store == 0)
        cout << "the factorial of 0 is 1" << endl;
    else
        cout << "the factorial of " << store << " is " << factorial << endl;
    return 0;
}