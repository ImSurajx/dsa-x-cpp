// Ques: wap to count digit of a given number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num; // 543
    int digit = 0;
    int store = num;
    while (num > 0) // 543 >= 0, 54 >= 0, 5 >= 0
    {
        num = num / 10; // 543/10 = 54, 54/10 = 5; 5/10 = 0;
        digit++;        // 1 2
    }
    if (store == 0)
    {
        cout << 0 << " has " << 1 << " digits." << endl;
    }
    else
    {
        cout << store << " has " << digit << " digits." << endl;
    }
    return 0;
}