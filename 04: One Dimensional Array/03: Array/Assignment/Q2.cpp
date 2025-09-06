// Ques: Find the factorial of a large number.
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
vector<int> factorial(int num)
{
    vector<int> result = {1};
    int carry = 0;
    for (int i = 2; i <= num; i++)
    {
        for (int j = 0; j < result.size(); j++)
        {
            int temp = result[j] * i + carry;
            result[j] = temp % 10;
            carry = temp / 10;
        }
        while (carry > 0)
        {
            result.push_back(carry % 10);
            carry /= 10;
        }
    }
    int i = 0;
    int j = result.size() - 1;
    while (i <= j)
    {
        int temp = result[i];
        result[i] = result[j];
        result[j] = temp;
        i++;
        j--;
    }
    return result;
}
int main()
{
    int n;
    cout << "enter number : ";
    cin >> n;
    vector<int> arr = factorial(n);
    cout << "factorial of number is : ";
    display(arr);
    return 0;
}