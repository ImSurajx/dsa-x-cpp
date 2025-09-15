#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter string : ";
    getline(cin, str);
    int n = str.length();
    cout << "string is : " << str << endl;
    // s.substr(idx, length) : the value after (idx to length) will be given.
    cout << str.substr(n / 2) << endl;
    return 0;
}