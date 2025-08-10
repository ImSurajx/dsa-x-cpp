// Find the Greatest Interger of the given real number.
#include <iostream>
using namespace std;
int main()
{
    float num;
    cout << "enter a number: ";
    cin >> num;
    // greatest interger: the nearest integer of the left side on number line
    if (num > 0)
        cout << "the greatest integer is : " << int(num) << endl;
    else
        cout << "the greatest integer is :" << int(num) - 1 << endl;
    return 0;
}