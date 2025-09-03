// Ques: wap to find the larget three elements in the array
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
    int max = INT_MIN;
    int smax = INT_MIN;
    int tmax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (v[i] > max)
        {
            tmax = smax;
            smax = max;
            max = v[i];
        }
        else if (v[i] > smax)
        {
            tmax = smax;
            smax = v[i];
        }
        else if (v[i] > tmax)
        {
            tmax = v[i];
        }
    }
    cout << "larget number : " << max << endl;
    cout << "second larget number : " << smax << endl;
    cout << "third larget number : " << tmax << endl;
    return 0;
}