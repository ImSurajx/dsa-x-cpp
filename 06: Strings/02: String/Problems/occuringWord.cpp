/*
ques: given a sentence 'str', return the word that is occuring most numbers of times in that sentence.
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;
int main()
{
    string str;
    cout << "enter string : ";
    getline(cin, str);
    stringstream s(str);
    string temp;
    vector<string> v;
    while (s >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int maxCount = 1;
    int count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        maxCount = max(maxCount, count);
    }
    count = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        if (count == maxCount)
            cout << v[i] << " " << maxCount << endl;
    }
}