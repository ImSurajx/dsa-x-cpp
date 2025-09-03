// Ques 3: check if the given array is sorted or not
#include <iostream>
using namespace std;
// for display the array
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}
// for taking input in array.
void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
int main()
{
    int size;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> v;
    cout << "enter elements : ";
    input(v, size);
    bool flag = true;
    for (int i = 0; i < size - 1; i++)
    {

        if (v[i - 1] > v[i])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "the following array is sorted." << endl;
    }
    else
    {
        cout << "the following array is not sorted." << endl;
    }

    return 0;
}