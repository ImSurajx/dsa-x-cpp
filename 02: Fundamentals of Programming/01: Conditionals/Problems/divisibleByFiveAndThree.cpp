#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num % 5 == 0 && num % 3 == 0)
    {
        cout << "the number is divisible by 5 & 3." << endl;
    }
    else if (num % 5 == 0)
    {
        cout << "the number is only divisible by 5." << endl;
    }
    else if (num % 3 == 0)
    {
        cout << "the number is only divisible by 3." << endl;
    }
    else
    {
        cout << "the number is not divisible by 5 also not by 3." << endl;
    }
    return 0;
}