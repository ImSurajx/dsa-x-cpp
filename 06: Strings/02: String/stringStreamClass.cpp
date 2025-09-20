#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    string s;
    cout << "enter string : ";
    getline(cin, s);
    stringstream str(s);
    string temp;
    while (str >> temp)
    { // taking input in str
        cout << temp << endl;
    }
    return 0;
}