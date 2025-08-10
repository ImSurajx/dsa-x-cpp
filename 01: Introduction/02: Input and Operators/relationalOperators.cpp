// Relational Operators
#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = 20; // assignment operator: put 20 inside y
    cout<< (y = 100)<<endl;
    cout << x <<endl<< y<<endl;
    cout << (x == y) << endl; // comparision
    cout << (x != y) << endl; // comparision
    cout << (x > y) << endl; // comparision
    cout << (x < y) << endl; // comparision
    cout << (x >= y) << endl; // comparision
    cout << (x <= y) << endl; // comparision
    return 0;
}