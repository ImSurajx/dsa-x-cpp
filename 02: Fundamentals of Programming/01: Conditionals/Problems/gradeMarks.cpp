// Ques: Take marks percentage of a student and print the grade according to marks;
/*
1. 91-100 excellent
2. 81-90 very good
3. 71-80 good
4. 61-70 can do better
5. 51-60 average
6. 41-50 below average
7. <40 fail
*/
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter marks: ";
    cin >> marks;
    if (91 <= marks && marks <= 100)
    {
        cout << "Grade: Excellent" << endl;
    }
    else if (81 <= marks && marks <= 90)
    {
        cout << "Grade: Very Good" << endl;
    }
    else if (71 <= marks && marks <= 80)
    {
        cout << "Grade: Good" << endl;
    }
    else if (61 <= marks && marks <= 70)
    {
        cout << "Grade: Can do Better" << endl;
    }
    else if (51 <= marks && marks <= 60)
    {
        cout << "Grade: Average" << endl;
    }
    else if (40 <= marks && marks <= 50)
    {
        cout << "Grade: Below Average" << endl;
    }
    else if (0 <= marks && marks < 40)
    {
        cout << "Grade: Fail" << endl;
    }
    else
    {
        cout << "Invalid Input: please enter marks in the range of 0-100" << endl;
    }
    return 0;
}