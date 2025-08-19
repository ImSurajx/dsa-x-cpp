// Ques: print hello world 'n' times. take n as input from user.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << "Hello World." << endl;
    }
    return 0;
}