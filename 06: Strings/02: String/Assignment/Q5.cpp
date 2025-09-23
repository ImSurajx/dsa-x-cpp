/*
ques: given a sentence 'str' return the word that is lexicographically maximum.
*/
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cout << "enter string : ";
    getline(cin, str);
    stringstream s(str);
    string temp;
    vector<string> v;
    string max;
    string sum;
    if (s >> max)
    {
        while (s >> temp)
        {
            if (max < temp)
                max = temp;
        }
        cout << "lexicographically maximum is : " << max << endl;
    }
    else
    {
        cout << "no input found." << endl;
    }

    return 0;
}