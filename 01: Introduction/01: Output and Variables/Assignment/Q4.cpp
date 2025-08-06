/*
What is the output of this program?
int main() {
int a = 4;
int b = 5;
a++, b--;
cout << ++a << " " << b--;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 5;
    a++, b--; // a = 5 , b = 4
    cout << ++a << " " << b--; //a = 6, b = 3
    // output:
    // 6 4
}