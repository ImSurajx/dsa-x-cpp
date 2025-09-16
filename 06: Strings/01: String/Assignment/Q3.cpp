// Ques : Check whether the given string is palindrome or not.
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter string: ";
    getline(cin, str);
    string store = str;
    reverse(str.begin(), str.end());
    if (str == store)
    {
        cout << "the following number is a palindrome." << endl;
    }
    else
    {
        cout << "the following number is not a palindrome." << endl;
    }

    return 0;
}