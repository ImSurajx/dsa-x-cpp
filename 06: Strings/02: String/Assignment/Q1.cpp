/*
ques: input a string and conccatenate with it's revers string and print it
*/
#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"enter string : ";
    getline(cin,s);
    string s2 = s;
    reverse(s.begin(), s.end());
    cout<<s2+s<<endl;
    return 0;
}