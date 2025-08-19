#include <iostream>
using namespace std;
int main()
{
    int x;
    // for (x = 0; x <= 255; x++)
    while (x = 0; x <= 255; x++) // it's a for loop so instead of while use for
    {
        cout << "Ascii value of Character" << (char)('a' + x);
        cout << " is " << x << endl;
    }
    return 0;
}