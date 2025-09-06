// Ques: Find the first non-repeating element in the array .
#include <iostream>
using namespace std;
void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n, x;
    cout << "enter size of array : ";
    cin >> n;
    vector<int> v;
    cout << "enter elements : ";
    input(v, n);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i] == v[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "unique element is : " << v[i] << endl;
            break;
        }
    }
    return 0;
}