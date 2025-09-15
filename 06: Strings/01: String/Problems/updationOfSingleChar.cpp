#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "enter string: ";
    getline(cin, str); // takes the whole word (stops at space)
    cout << str << endl;
    str[0] = 'A'; // in c++ character updation is allowed.
    cout << str << endl;
    return 0;
}