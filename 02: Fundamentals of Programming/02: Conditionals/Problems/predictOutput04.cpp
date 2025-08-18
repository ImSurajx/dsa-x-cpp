#include <iostream>
using namespace std;
int main()
{
    int x;
    // note: ternary always solve right to left.
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30; // 30
    cout << "value of x : " << x;     // 30
    return 0;
}