// Ques: Input a string of length n and count all the consonants in the given string.
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout << "enter string: ";
    getline(cin, str);
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count = count;
        } else {
            count++;
        }
        
    }
    cout << "no of consonants are : " << count << endl;
    return 0;
}