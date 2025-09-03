// Ques: Count the number of elements strictly greater than x
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
    int size, x = 0;
    cout << "enter size of array : ";
    cin >> size;
    vector<int> v;
    cout << "enter elements : ";
    input(v, size);
    cout << "enter x : ";
    cin >> x;
    for (int i = 0; i < size; i++)
    {
        if (v[i] > x)
        {
            x++;
        }
    }
    cout << "x is greather than  : " << x <<" numbers." <<endl;
    return 0;
}