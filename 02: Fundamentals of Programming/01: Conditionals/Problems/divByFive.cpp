#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num % 5 == 0)
    {
        cout << "divisible by 5." << endl;
    }
    else
    {
        cout << "doesn't divisible by 5." << endl;
    }
    return 0;
}