#include <iostream>
using namespace std;
//  function : function allow us to use same peace of code multiple times, so we can avoid repeatation.
//  dataType functionName(arguments){
//  yourCode
//  returnType };

void greeting()
{
    cout << "Good Morning" << endl;
    cout << "Have a nice day." << endl;
}

void starTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() 
/*
- always run first.
- 
*/
{
    // using loop
    // int n = 3;
    // for (int n = 3; n < 6; n++)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << "* ";
    //         }
    //         cout << endl;
    //     }
    // }

    // greeting(); // function calling
    for (int i = 1; i <= 3; i++)
    {
        int n;
        cout << "enter a number : ";
        cin >> n;
        starTriangle(n);
    }

    return 0;
}