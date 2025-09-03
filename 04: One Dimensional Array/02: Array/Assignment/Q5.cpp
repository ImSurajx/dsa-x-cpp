// Ques: find the difference between the sum of elements at even indices to the sum of elements at odd indices.
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
    int size, esum = 0, osum = 0;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> v;
    cout << "enter elements : ";
    input(v, size);
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            v[i] *= 2;
        }
        else
        {
            v[i] += 10;
        }
    }
    cout << "array is : ";
    display(v);
    return 0;
}