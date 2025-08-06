/*
How many of these can be a variable name ?
01Pwskills
_FLOAT
int
FLOAT
You will succeed
*/
#include <iostream>
using namespace std;
int main()
{
    int 01Pwskills; // not possible
    int _FLOAT; // possible
    int int; // not possible
    int FLOAT; // possible
    int You will succeed; // not possible
    return 0;
}