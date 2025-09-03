#include <iostream>
using namespace std;
vector<int> reverseVector(vector<int> &a)
{
    int i = a.size() - 1;
    vector<int> b;
    while (i >= 0)
    {
        int x = a[i];
        b.push_back(x);
        i--;
    }
    return b;
}

int main()
{
    int size;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> v;
    // taking input of elements;
    cout << "enter elements : ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    // print elements:
    cout << "elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    vector<int> rv = reverseVector(v);
    cout << "reverse vector is : ";
    for (int i = 0; i < rv.size(); i++)
    {
        cout << rv.at(i) << " ";
    }
    cout << endl;
    return 0;
}