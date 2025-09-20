/*
ques: input a string and return the number of times the neighbouring characters are differenct from each other.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    int count = 0;
    string str;
    cout << "enter string : ";
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if(str.size()==1){
            break;
        } 
        if(str.size()==2 && str[0]!= str[1]){
            count = 1;
            break;
        }
        if (i == 0)
        {
            if (str[i] != str[i + 1])
            {
                count++;
            }
        }
        else if (i == str.size() - 1)
        {
            if (str[i] != str[i - 1])
            {
                count++;
            }
        } else{
            if (str[i] != str[i - 1] && str[i] != str[i + 1])
            {
                count++;
            }
        }
    }
    cout << "neighbouring characters are different from each other : " << count << endl;
    return 0;
}