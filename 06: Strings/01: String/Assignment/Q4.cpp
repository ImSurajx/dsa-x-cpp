// Ques: Input a string of even length and reverse the second half of the string.
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter string: ";
    getline(cin, str);
    // reversing the second half..
    reverse(str.begin()+ str.length()/2, str.end());
    cout<<"string after reversal : "<<str<<endl;
    return 0;
}