#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter string : ";
    getline(cin, str);
    cout << "string is : " << str << endl;
    // s.substr(idx, length) : the value after (idx to length) will be given.
    cout<<str.substr(2,4);
    return 0;
}