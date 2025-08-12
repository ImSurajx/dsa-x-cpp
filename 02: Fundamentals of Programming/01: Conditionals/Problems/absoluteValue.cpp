// Ques: Given an integer. Print the absolute value of that integer
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "absolute value is: " << (-1 * num) << endl;
    }
    else
    {
        cout << "absolute value is: " << num << endl;
    }
    return 0;
}