// Ques: Sort the arry of 0's and 1's.
#include <iostream>
#include<vector>
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

// m1 : two pass method, using extra varaible
void countPrint(vector<int> &v)
{
    int noz = 0, noo = 0; // no. of zeros, no. of ones.
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            noz++;
        }
        else if (v[i] == 1)
        {
            noo++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < noz)
        {
            v[i] = 0;
        }
        else if (i >= noz)
        {
            v[i] = 1;
        }
    }
}

// m2: two pointer
void swap(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i <= j)
    {
        if (v[i] == 0)
        {
            i++;
        }
        else if (v[j] == 1)
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