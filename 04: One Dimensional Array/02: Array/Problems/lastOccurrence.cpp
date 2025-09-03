// Ques: find the last occurrence of x in the array.
#include <iostream>
using namespace std;
int main()
{
    int size, x, idx = -1;
    vector<int> v;
    cout << "enter number of elements : ";
    cin >> size;
    cout << "enter elements : ";
    // when size is defined.
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cin>>v[i];
    // }

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
    cout << "enter x : ";
    cin >> x;
    int i = size - 1;
    while (i >= 0)
    {
        if (x == v[i])
        {
            idx = i;
            break;
        }
        i--;
    }
    cout << "last occurrence of x in the array is at index : " << idx << endl;
    return 0;
}