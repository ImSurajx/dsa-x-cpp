// Ques: take float input and print the fractional part of the real number.
#include <iostream>
using namespace std;
int main()
{
    float num;
    cout << "enter a real number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "fractional part is: " << (-1) * (num - int(num) + 1) << endl;
    }
    else
    {
        cout << "fractional part is: " << num - int(num) << endl;
    }
    return 0;
}