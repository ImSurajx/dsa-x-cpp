// Ques: wap to print all the ASCII values and their equivalend characters of 26 alphabets using a while loop
#include <iostream>
using namespace std;
int main()
{
    int i = 65;
    while (i <= 90)
    {
        cout << char(i) << " : " << i << endl;
        i++;
    }
    return 0;
}