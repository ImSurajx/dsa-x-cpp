// Ques: wap to input month number and print total number of days in month using switch case.
#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "enter month in form of number : ";
    cin >> month;
    switch ((month <= 7 && month % 2 != 0) || (month >= 8 && month % 2 == 0))
    {
    case 1:
        cout << "31 Days" << endl;
        break;
    }

    switch (month == 4 || month == 6 || month == 9 || month == 11)
    {
    case 1:
        cout << "30" << endl;
        break;
    }
    switch (month)
    {
    case 2:
        cout << "28 Days" << endl;
        break;
        return 0;
    }
}