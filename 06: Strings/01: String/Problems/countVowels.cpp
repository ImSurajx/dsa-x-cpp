/*
Ques: input a str[i]ing of length n and count all the vowels in the given str[i]ing.
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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    cout << "number of vowels is: " << count << endl;
    return 0;
}