/*
ques: given n strinf vector consisting of digits from 0 to 9. return the index of string which
has maximum value. (take 0 based indexing).
*/
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "enter numbers : ";
    getline(cin, s);
    string temp;
    vector<int> v;
    stringstream str(s);
    while (str >> temp)
    {
        v.push_back(stoi(temp));
    }
    int max = INT_MIN;
    int idx = -1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] > max)
        {
            max = v[i];
            idx = i;
        }
    }
    cout << "the maximum number is : " << max << " & index is : " << idx << endl;
    return 0;
}