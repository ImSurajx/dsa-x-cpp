// Ques: move all negative numbers to beginning and positive to end with constant extra space.
#include <iostream>
#include <vector>
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
        cout << v.at(i) << " ";
    }
    cout << endl;
}

// m2: two pointer
void swap(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i <= j)
    {
        if (v[i] < 0)
        {
            i++;
        }
        else if (v[j] > 0)
        {
            j--;
        }
        else
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    int size;
    cout << "enter size : ";
    cin >> size;
    cout << "enter elements : ";
    vector<int> v;
    input(v, size);
    swap(v);
    cout << "sorted array is : ";
    display(v);
    return 0;
}