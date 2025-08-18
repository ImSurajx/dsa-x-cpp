// Ques: wap to input month number and print total number of days in month using switch case.
#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "enter month in form of number : ";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "Jan : 31" << endl;
        break;
    case 2:
        cout << "Feb: 28" << endl;
        break;
    case 3:
        cout << "Mar : 31" << endl;
        break;
    case 4:
        cout << "Apr : 30" << endl;
        break;
    case 5:
        cout << "May : 31" << endl;
        break;
    case 6:
        cout << "June : 30" << endl;
        break;
    case 7:
        cout << "July : 31" << endl;
        break;
    case 8:
        cout << "Aug : 31" << endl;
        break;
    case 9:
        cout << "Sep: 30" << endl;
        break;
    case 10:
        cout << "Oct: 31" << endl;
        break;
    case 11:
        cout << "Nov : 30" << endl;
        break;
    case 12:
        cout << "Dec: 31" << endl;
        break;

    default:
        cout << "Invalid Statement" << endl;
        break;
    }
    return 0;
}