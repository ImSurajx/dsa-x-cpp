// Ques: Given the marks of the student. if the marks are greater than 33 print the result as pass otherwise fail without using if else statment.
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "enter your marks : ";
    cin >> marks;
    (marks > 33) ? cout << "pass" << endl : cout << "fail"<<endl;
    return 0;
}