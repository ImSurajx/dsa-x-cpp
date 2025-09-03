// passing vector into functions
#include <iostream>
using namespace std;
void change(vector<int> a) // if we use vector<int>& a it will pass by reference
{
    a[0] = 100; // create a new vector named a, so vector are passed by value not by refrence.
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    vector<int> v;
    int size;
    cout << "enter number of elements : ";
    cin >> size;
    cout << "enter elements : ";

    // when size is not defined.
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "elements are : ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    cout << endl;
    cout << "changed array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}