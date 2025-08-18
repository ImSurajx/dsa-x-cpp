#include <iostream>
using namespace std;
int main()
{
    // anything except non-zero values or expression / condition always give true.
    /*
    if(condition) statement;
    if(expression) statement;
    */
    int a;
    if (3 + 2 % 5)
        cout << "this works" << endl;
    if (a = 10)
        cout << "even this works" << endl;
    if (-5)
        cout << "surprisingly even this works" << endl;
    return 0;
}