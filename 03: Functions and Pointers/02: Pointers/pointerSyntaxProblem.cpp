#include <iostream>
using namespace std;
int main()
{
    int x;
    int *p1 = &x;

    int y;
    int *p2 = &y;

    int a, b;                   // both are integer
    int *x1, x2;                // first variable is pointer(x1) & second one is interger
    int *a1 = &a, b1 = b;       // first variable is pointer(x1) & second one is interger
    int *ptr1 = &a, *ptr2 = &b; // both are pointers

    return 0;
}