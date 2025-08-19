// Ques: Display this GP- 1,2,4,8,16,32... upto n terms
#include <iostream>
using namespace std;

int powerFun(int r, int n) // (r=2,n=1), (r=2, n=2), (r=2, n=3), (r=2, n=4), (r=2, n=5)
{
    int power = 1;
    for (int i = 0; i < n - 1; i++) // (i=0, i<0, i++), (i=0, i < 1; i++),  (i=0, i < 2, i++), (i=0, i<3,i++), (i=0, i<4, i++)
    {
        power *= r; // 1, 2, 4, 8, 16
    }
    return power;
}
int main()
{
    int a, r, n; // 1, 2, 5
    cout << "enter first term of GP : ";
    cin >> a;
    cout << "enter common ration of GP : ";
    cin >> r;
    cout << "enter number of terms of GP : ";
    cin >> n;
    cout << "The GP is : ";
    for (int i = 1; i <= n; i++) // 5, 4, 3
    {
        cout << a * powerFun(r, i) << " "; // (1 * 1 = 1), (1 * 2 = 2), (1 * 2 * 2 = 4), (1*2*2*2=8), (1*2*2*2*2=16)
    }
    cout << endl;
    // also can be writen as: using external variables
    int x = 1;
    cout << "The GP is : ";
    for (int i = 1; i <= n; i++)
    {
        cout << x << " ";
        x *= 2;
    }
    cout << endl;
    return 0;
}