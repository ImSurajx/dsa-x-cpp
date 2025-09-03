// Ques: Find the unique number in a given array where all the elements are being repeated twice with one value being unique.
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
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (v[i] == v[j])
                count++;
        }
        if (count == 1)
        {
            cout << "unique value is : " << v[i] << endl;
            return 0;
        }
    }
    cout << "no unique value. " << endl;
    return 0;
}