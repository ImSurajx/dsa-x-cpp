// Ques: Display this GP - 3,12,48... upto 'n' terms
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    int x = 3;
    for (int i = 1; i < n; i++)
    {
        cout << x << " ";
        x *= 4;
    }
    cout << endl;
}