#include <iostream>
using namespace std;

// case 1: we assign defualt values of variable & doesn't give any value while calling
// void fun(int x = 7, int y = 8)
// {

// }
// int main()
// {
//     fun();
//     return 0;
// }

// case 2: we call function with values, it will replace the defualt value of function.
// void fun(int x = 7, int y = 8)
// {
//     cout << x << " " << y << endl;
// }
// int main()
// {
//     fun(4, 6);
//     return 0;
// }

// case 3: we call the function with one value, it will assume first value of actual parameter as first value of formal parameter & rest of the values are default value & it will print. (4,8)
// void fun(int x = 7, int y = 8)
// {
//     cout << x << " " << y << endl;
// }
// int main()
// {
//     fun(4);
//     return 0;
// }

// case 4: if we assign default value to only one argument & reset of them are only initalize then when we try to call a function with actual parameter it will return us a error so please assign all the value.
// void fun(int x = 7, int y)
// {
//     cout << x << " " << y << endl;
// }
// int main()
// {
//     fun(5, 6);
//     return 0;
// }

// case 4: if we take two arguments one of them is integer, other one is float then in that we can call a funcation with that particular data type like. fun(4,3.0);
// void fun(int x, float y)
// {
//     cout << x << " " << y << endl;
// }
// int main()
// {
//     fun(4, 6.0);
//     return 0;
// }

// case 5: if we assign defualt values to parameters of argument & both have two different data types & if we call the function with one data type, it always going to assign left to right(to first formal parameter).
// void fun(int x = 8, float y = 3.1)
// {
//     cout << x << " " << y << endl;
// }
// int main()
// {
//     fun(6.0);
//     return 0;
// }