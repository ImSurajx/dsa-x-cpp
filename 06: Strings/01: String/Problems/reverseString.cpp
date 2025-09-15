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
    reverse(str.begin(), str.end() - n / 2);
    cout << str;
    return 0;
}