// wap to calculate sum of two numbers using pointers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    cout << "enter a & b respectively : ";
    cin >> *ptr1 >> *ptr2;
    cout << "sum is : " << *ptr1 + *ptr2 << endl;
    return 0;
}