#include <iostream>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> idx;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                int x = i, y = j;
                idx.push_back(x);
                idx.push_back(y);
            }
        }
    }
    return idx;
}

int main()
{
    int target, size;
    cout << "enter size of array : ";
    cin >> size;
    cout << "enter target : ";
    cin >> target;
    vector<int> nums;
    // taking input of elements;
    cout << "enter elements : ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    // print elements:
    cout << "elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << nums.at(i) << " ";
    }
    cout << endl;
    vector<int> store = twoSum(nums, target);
    cout << "indices are : ";
    for (int i = 0; i < store.size(); i++)
    {
        cout << store.at(i) << " ";
    }
    cout << endl;
    return 0;
}