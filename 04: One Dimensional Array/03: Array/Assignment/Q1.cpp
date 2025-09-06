// Ques: count the number of triplets whose sum is equal to the given value x.
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
    cout << "enter x : ";
    cin >> x;
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (v[i] + v[j] + v[k] == x)
                {
                    count++;
                }
            }
        }
    }
    cout << "the number of triplets is : " << count << endl;
    return 0;
}