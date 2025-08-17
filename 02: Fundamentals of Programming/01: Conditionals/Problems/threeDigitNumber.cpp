// Ques: Take positive integer input and tell if it is a three digit number or not.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (99 < num && num < 1000)
    {
        cout << "the fllwoing number is three digit." << endl;
    }
    else
    {
        cout << "the following number is not a three digit number." << endl;
    }
    return 0;
}