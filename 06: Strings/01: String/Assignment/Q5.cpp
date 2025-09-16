// Ques: Input a string of length less than 10 and convert it into integer without using builtin function.
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "enter string : ";
    cin >> str;
    int value = 0;
    for(int i = 0; i < str.size(); i++){
        int digit = str[i] - '0'; // ascci value of str[from starting] - ascci value of char 0 = digit or number
        value = value * 10 + digit; // move digit to the end.
    }
    cout<<"converted integer : "<<value<<endl;
    return 0;
}