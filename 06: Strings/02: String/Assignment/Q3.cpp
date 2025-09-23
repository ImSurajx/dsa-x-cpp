/*
ques: input a string and return the number of substrings that contain only vowels.
1. take string as input.
2. extract all posible strings store in vector
3. in this string vector check on which indices the element only contain vowels
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter string : ";
    getline(cin, str);
    vector<string> v;
    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = 1; j <= (str.size() - i); j++)
        {
            v.push_back(str.substr(i, j));
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        bool flag = true;
        for (int j = 0; j < v[i].size(); j++)
        {
            if (v[i][j] != 'a' && v[i][j] != 'e' && v[i][j] != 'o' && v[i][j] != 'u' && v[i][j] != 'i')
            {
                flag = false;
            }
        }
        if (flag)
        {
            count++;
        }
    }
    cout << "the number of substrings that contain only vowels : " << count << endl;
    return 0;
}