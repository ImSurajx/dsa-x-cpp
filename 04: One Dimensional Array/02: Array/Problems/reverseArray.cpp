#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> v;
    cout << "enter elements : ";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "current array : ";
    for (int i = 0; i < size; i++)
    {
        cout << v.at(i) << " ";
    }
    // reverse vector using while loop.
    cout << endl;
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    cout << "array after reverse : ";
    for (int i = 0; i < size; i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
    return 0;
}