// Predict the output of the following code snippet
#include <iostream>
using namespace std;
int main()
{
    int a = 15, b = 20;
    int *ptr = &a;  // ptr -> a
    int *ptr2 = &b; // ptr2 -> b
    *ptr = *ptr2;   // a = b, which mean a  = 20, b = 20
    cout << *ptr << " " << *ptr2 << endl;
    return 0;
}