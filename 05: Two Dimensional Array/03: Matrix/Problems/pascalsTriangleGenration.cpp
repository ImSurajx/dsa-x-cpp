// ques: given an integer 'numRows' genrate pascal's triangle.
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m;
    cout<<"enter no of rows : ";
    cin>>m;
    vector<vector<int>> v;
    for (int i = 1; i <= 5; i++)
    {
        vector<int> x(i);
        v.push_back(x);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                v[i][j] = 1;
            }
            else
            {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << v[i][j];
        }
        cout<<endl;
    }
}