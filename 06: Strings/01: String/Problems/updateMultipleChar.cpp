/*
Ques: input a string of length of length n and count all the vowels in the given string
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n ;
    cout<<"enter length : ";
    cin>>n;
    char str[n];
    cout << "enter string: ";
    for(int i = 0; i < n; i++){
        cin>>str[i];
    }
    cout<<str<<endl;
    int count = 0;
    for (int i = 0; i != n; i++)
    {
        if(i%2==0){
            str[i] = 'a';
        }
    }
    cout<<str<<endl;
    return 0;
}