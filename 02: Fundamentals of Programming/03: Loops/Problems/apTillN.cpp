// Ques: Display this AP- 1,3,5,7,9.. upto n terms
// next term = a + (n-1)d.
// a = 1, n = nth term & d = 2
#include <iostream>
using namespace std;
int main()
{
    int a, d, n;
    cout << "enter first term of A.P : ";
    cin >> a;
    cout << "enter common difference of A.P : ";
    cin >> d;
    cout << "enter no of terms you want: ";
    cin >> n;
    cout << "The AP is: ";
    for (int i = 1; i <= n; i++)
    {
        cout << (a + (i - 1) * d) << " ";
    }
    cout << endl;
    return 0;
}