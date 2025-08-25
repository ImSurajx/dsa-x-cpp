#include <iostream>
using namespace std;

// declaration of function : int mean, it's return a integer value.
int sum(int x, int y)
{
    return x + y; // when return excecuted, the function will end, later this line none of code work.
}

int main()
{
    int x = 2;
    int y = 9;
    cout << sum(x, y) << endl; // calling a function.
}