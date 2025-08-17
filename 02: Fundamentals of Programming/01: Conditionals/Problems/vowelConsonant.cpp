// Ques: wap to check weather an alphabet is vowel or a consonant.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    if ((int(ch) >= 65 && int(ch) <= 90) || (int(ch) >= 90 && int(ch) <= 122))
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << ch << " is a vowel"<<endl;
        }
        else
        {
            cout << ch << " is a consonant"<<endl;
        }
    }
    else
    {
        cout << ch << " is not a alphabet" << endl;
    }
}