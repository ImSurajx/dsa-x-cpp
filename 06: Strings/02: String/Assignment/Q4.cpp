/*
ques: given an array of string check whether they are anagram or not.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int count = 0;
    cout << "enter first string : ";
    string str1;
    getline(cin, str1);
    cout << "enter second string : ";
    string str2;
    getline(cin, str2);
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end()); // order of ascci values : lescogaphical order
    if (str1 == str2)
    {
        cout << "the string is anagram." << endl;
    }
    else
    {
        cout << "the string is not a anagram." << endl;
    }
    return 0;
}