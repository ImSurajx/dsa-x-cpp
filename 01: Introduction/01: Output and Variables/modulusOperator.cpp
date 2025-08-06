#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = -3;
    int remainder = a % b;
    cout << remainder;
    // Properties
    // if a < b -> a % b = a;
    // if a > (-b) = a > b;
    // if (-a) > b = -(a > b);
    // if (-a) > (-b) = -(a > b);
}