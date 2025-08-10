// Find the output for this code. Let input:- 2 3
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    x += y; // 2 = 2 + 3 => 5
    x -= y; // 5 = 5 - 3 => 2
    x %= y; // 2 = 2 % 3 => 2
    cout << x; // 2
} 