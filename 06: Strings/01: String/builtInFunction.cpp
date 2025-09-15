#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Suraj Kumar";
    // use to get size.
    cout << str.size() << endl;   // use to get the size.
    cout << str.length() << endl; // use to get the size.
    // push element at back, or remover element from back
    str.push_back('a');
    str.push_back('b');
    str.push_back('c');
    cout << str << endl;
    string t = "deft";
    str = str + t; // we use '+' to append in c++ also known as concat.
    cout << str << endl;
    reverse(str.begin()+2, str.end()-1); // to reverse the string.
    cout << str << endl;
    return 0;
}