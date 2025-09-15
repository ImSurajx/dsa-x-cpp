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
    reverse(str.begin()+1, str.begin()+5);
    cout << str<<endl;
    return 0;
}