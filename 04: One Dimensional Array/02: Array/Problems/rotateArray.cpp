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
// for reversing the array
void rev(vector<int> &v, int fromIdx, int toIdx)
{
    int i = fromIdx, j = toIdx;
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int size, k;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> v;
    cout << "enter elements : ";
    input(v, size);
    cout << "elements are : ";
    display(v);
    cout << "enter k: ";
    cin >> k;
    if (k > size)
    {
        k %= size;
    }
    rev(v, 0, size - (k + 1));
    rev(v, size - k, size - 1);
    rev(v, 0, size - 1);
    cout << "array after k times rotation : ";
    display(v);
    return 0;
}