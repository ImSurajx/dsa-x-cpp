#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int count = 0;
    string str;
    cout << "enter string : ";
    getline(cin, str);
    cout << str << endl;
    sort(str.begin(), str.end()); // order of ascci values : lescogaphical order
    cout << str << endl;
    return 0;
}