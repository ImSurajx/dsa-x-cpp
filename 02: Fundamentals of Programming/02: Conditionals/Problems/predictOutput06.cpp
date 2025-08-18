#include <iostream>
using namespace std;
int main()
{
    int x = 3, y, z;
    y = x = 10; // x = 10, y = 10
    z = x < 10; // z = 0
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    return 0;
}