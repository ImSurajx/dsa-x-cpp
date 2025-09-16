// Ques: Input a string of size n and update all the odd positions in the string to character ‘#’. Consider 0-based indexing.
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "enter string: ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 != 0)
        {
            str[i] = '#';
        }
    }
    cout << "string is : " << str << endl;
    return 0;
}