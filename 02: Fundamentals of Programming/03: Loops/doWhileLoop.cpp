/*
Do While Loop: atleast run one time even if condition is false.
initalization;
do{
    //code
    increment/decrement
} while (condition)
*/
#include <iostream>
using namespace std;
int main()
{
    int i = 11;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= 10);
}