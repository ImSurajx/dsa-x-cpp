// Ques: thake positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num % 5 == 0 || num % 3 == 0)
    {
        if (num % 15 != 0)
        {
            cout << "the following number is divisible by 5 or 3 but not by 15."<<endl;
        } else {
            cout<<"the following number is divisible by 5 & 3 or 15."<<endl;
        }
    }
    else
    {
        cout << "the following number is not divible by 5 or 3."<<endl;
    }
    return 0;
}