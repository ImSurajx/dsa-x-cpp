// Ques: Print the table of 'n' Here 'n' is an interger which the user will input.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout << i * n << endl;
    }
    return 0;
}