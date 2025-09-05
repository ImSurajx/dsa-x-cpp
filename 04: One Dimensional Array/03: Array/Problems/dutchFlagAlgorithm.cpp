/*
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
You must solve this problem without using the library's sort function.
*/
// Ques: Sort the arry of 0's and 1's.
#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

// m1 : two pass method, using extra varaible
void countPrint(vector<int> &v)
{
    int noz = 0, noo = 0, noft = 0; // no. of zeros, no. of ones.
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            noz++;
        }
        else if (v[i] == 1)
        {
            noo++;
        }
        else if (v[i] == 2)
        {
            noft++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
        {
            v[i] = 0;
        }
        else if (i < (noz + noo))
        {
            v[i] = 1;
        }
        else if (i >= (noz + noo))
        {
            v[i] = 2;
        }
    }
}
// m2: dutch flag algorithm/three pointer algorithm
void swap(vector<int> &nums)
{
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            int temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            mid++;
            low++;
        }
        else if (nums[mid] == 2)
        {
            int temp = nums[high];
            nums[high] = nums[mid];
            nums[mid] = temp;
            high--;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
    }
}

int main()
{
    int size;
    cout << "enter size : ";
    cin >> size;
    cout << "enter elements : ";
    vector<int> v;
    input(v, size);
    swap(v);
    cout << "sorted array is : ";
    display(v);
    return 0;
}