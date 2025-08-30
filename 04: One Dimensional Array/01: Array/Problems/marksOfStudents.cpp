/*
Ques: Given an array of marks of students, if the marks of any student is less than 35 print its roll
number, where roll number refers to the index of the array.
*/
#include <iostream>
using namespace std;
int main()
{   int n;
    cout<<"enter number of studnets : ";
    cin>>n;
    int marks[n];
    // taking input
    cout<<"enter the marks : ";
    for (int i = 0; i < n; i++)
    {
        cin>>marks[i];
    }
    // giving output
    for (int i = 0; i < n; i++)
    {
        if (marks[i] < 35)
        {
            cout << i + 1 << endl;
        }
    }
    return 0;
}