// Ques: any year is input through your keyboard, wap to determine whether the year is a leap year or not (consider leap year occurs after 4).
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter a year : ";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }
    return 0;
}