// ques: waf which accepts a 2D array of integers and its size as arguments and displays the elements of middle row and the elements of the middle columns.
#include <iostream>
using namespace std;
void star(vector<vector<int>> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (i == (v.size() / 2) || j == (v.size() / 2))
            {
                cout << v[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cout << "enter rows : ";
    cin >> m;
    cout << "enter columns : ";
    cin >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    cout << "enter elements : " << endl;
    for (int i = 0; i < m; i++) // -> taking input.
    {
        // where i -> rows.
        for (int j = 0; j < n; j++)
        {
            // where j -> columns.
            cin >> arr[i][j];
        }
    }
    cout << "star is : " << endl;
    star(arr);
    return 0;
}