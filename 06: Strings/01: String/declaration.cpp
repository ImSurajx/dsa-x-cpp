#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string str = "suraj kumar";
    // cout << str[0] << endl;
    string s;
    // cin>>s; // only if the given string has no spaces.
    getline(cin, s); // alternative of cin for string.
    cout << s;
    return 0;
}