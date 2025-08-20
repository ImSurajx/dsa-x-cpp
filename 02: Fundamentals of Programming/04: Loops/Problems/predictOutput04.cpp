#include <iostream>
using namespace std;
int main()
{
    int x = 4, y = 0, z;
    while (x >= 0) // 4 3 2
    {
        if (x == y) // (4==0), (3==1) (2==2: loop will brick)
        {
            break;
        }
        else
        {
            cout << x << " " << y << endl; // (4,0), (3,1)
            x--;                           // 4 , 3
            y++;                           // 0 , 1 
        }
    }
    return 0;
}