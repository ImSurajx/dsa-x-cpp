// Ques: wap to find the smallest missing positive element in the sorted array that contains only positive elements
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter total no. of elements : ";
    cin >> n;
    int arr[n];
    int x = 1;
    bool flag = false;
    cout << "enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            x++;
        }
        else
        {
            cout << "missing element is : " << x << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
        cout << "missing element is : " << x << endl;
    return 0;
}