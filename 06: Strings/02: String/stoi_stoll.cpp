#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    string str;
    cout << "enter string : ";
    getline(cin, str); 
    int x = stoi(str); // convert string to intger
    // stoi - for small numbers, stoll -> to store in long long data type
    cout<<x<<endl;
}