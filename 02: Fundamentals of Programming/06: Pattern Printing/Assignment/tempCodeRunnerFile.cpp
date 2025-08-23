// Ques: any year is input through the keyboard, wap to determine wheather the year is a leap year or not, considering leap years ocurs after every 4 years.
#include <iostream>
using namespace std;

// This program takes a year as input from the user and determines whether
// it is a leap year or not, according to the standard rules.

int main()
{
    int year;
    // Prompt the user to enter a year
    cout << "enter year : ";
    // Read the year from the keyboard
    cin >> year;
    
    // The core logic of the program is in this single 'if' statement.
    // It checks the conditions for a leap year:
    // A year is a leap year if:
    // (It is divisible by 4 AND not by 100) OR (It is divisible by 400)
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        // If the conditions are met, the year is a leap year
        cout << "leap year" << endl;
    }
    else
    {
        // If the conditions are not met, the year is not a leap year
        cout << "not a leap year." << endl;
    }
    
    return 0;
}