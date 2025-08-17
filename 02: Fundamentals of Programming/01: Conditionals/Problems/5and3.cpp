// Ques: Take positive integer input and tell if it is divisble by 5 and 3
// nested way.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num % 5 == 0)
    {
        if (num % 3 == 0)
        {
            cout << num << " is divisible by 5 & 3." << endl;
        }
        else
        {
            cout << "the number is only divisble by 5 nor by 3." << endl;
        }
    }
    else
    {
        cout << "the following number is not divisible by 5 & 3." << endl;
    }
    return 0;
}