// Ques: Merge two sorted arrays.
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
// using three pointers
vector<int> mergeSort(vector<int> &arr1, vector<int> &arr2)
{
    int i = 0, j = 0, k = 0;
    int n = arr1.size() + arr2.size();
    vector<int> arr3;
    while (k < n)
    {
        if (i > arr1.size() - 1)
        {
            int x = arr2[j];
            arr3.push_back(x);
            j++;
            k++;
        }
        else if (j > arr2.size() - 1)
        {
            int x = arr1[i];
            arr3.push_back(x);
            i++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            int x = arr1[i];
            arr3.push_back(x);
            i++;
            k++;
        }
        else if (arr2[j] <= arr1[i])
        {
            int x = arr2[j];
            arr3.push_back(x);
            j++;
            k++;
        }
    }
    return arr3;
}

int main()
{
    int size1, size2;
    cout << "enter size of 1st array : ";
    cin >> size1;
    cout << "enter size of 2nd array : ";
    cin >> size2;
    vector<int> arr1, arr2, arr3;
    cout << "enter first array : ";
    input(arr1, size1);
    cout << "enter second array : ";
    input(arr2, size2);
    arr3 = mergeSort(arr1, arr2);
    cout << "sorted & merge array is : ";
    display(arr3);
    return 0;
}