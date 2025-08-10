#include <iostream>
using namespace std;
int main()
{
    // char data type
    char ch = '!'; // only one character is allowed & char must be in single letter except '\0' else '1', '2' & 'a' & so on
    char x = 'q';
    cout << ch << endl
         << x << endl;
    cout << (int)ch << endl
         << (int)x; //  each character has an ascaii value
    // 'A' -> 65 to 90
    // 'a' -> 97 to 122
    // '0' -> 48 to 57
    return 0;
}