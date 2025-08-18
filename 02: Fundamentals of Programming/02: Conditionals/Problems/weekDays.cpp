// Ques: wap to input week number(1-7) and print day of week name using switch case.
#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "enter day number : ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break; // break statment is important b/c the reason it's run everthing after case is matched.
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;

    default:
        cout << "Invalid Input" << endl;
        break;
    }
    return 0;
}