#include <iostream>
using namespace std;

// note: local variable > global variable: if we change any variable localy it will also change global variable.
int z = 50;            // global variable is accesable through all function
void fun(int x, int y) // formal parameters
{
    int a = 10; // local variable: only accessable inside function, not accessable outside.
    cout << "address of main x : " << &x << endl;
    cout << "address of main y : " << &y << endl;
}
int main()
{
    int x = 3;
    int y = 7;
    int a = 10; // local variable: only accessable inside function, not accessable outside.
    cout << "address of main x : " << &x << endl;
    cout << "address of main y : " << &y << endl;
    fun(x, y); // actual parameters
    return 0;
}