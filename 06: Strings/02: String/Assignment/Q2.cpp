/*
ques: find the second largest digit in the string consisting of digits from '0' to '9'.
*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    string nums;
    cout << "enter numbers : ";
    cin >> nums;
    vector<char> v;
    for (int i = 0; i < nums.size(); i++)
    {
        v.push_back(nums[i]);
    }
    sort(v.begin(), v.end());

    // check if all elements are same
    bool allSame = true;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[0]) {
            allSame = false;
            break;
        }
    }

    if (allSame)
    {
        cout << "there is no second max." << endl;
    }
    else
    {
        cout << "second max digit is : " << v[v.size() - 2] << endl;
    }
    return 0;
}