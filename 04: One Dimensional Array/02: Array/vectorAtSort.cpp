#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    int size;
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
        cout << v.at(i) << " "; // we use .at to access or update the value of vector
    }
    sort(v.begin(), v.end());
    cout << endl;
    cout << "sorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " "; // we use .at to access or update the value of vector
    }

    return 0;
}