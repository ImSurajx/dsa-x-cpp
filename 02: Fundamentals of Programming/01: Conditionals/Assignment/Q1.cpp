// Ques: Take 2 Interger input and print the greatest of them.
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "enter first & second number respectively: ";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << num1 << " is greatest." << endl;
    }
    else
    {
        cout << num2 << " is greatest." << endl;
    }
    return 0;
}