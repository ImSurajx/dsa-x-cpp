// Ques: wap to create a calculator that performs basic arithmetic operations (add, subtract, multiply and divide) using switch case and functions. the calculator should input two numbers and an operator from user.
#include <iostream>
using namespace std;

int switchCalculator(int a, int b, char c)
{
    switch (c)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;
        break;

    case '*':
        return a * b;
        break;

    case '/':
        return a / b;
        break;

    default:
        return 0;
        break;
    }
}

int main()
{
    int a, b;
    char c;
    cout << "enter expression in form of (a+b): ";
    cin >> a >> c >> b;
    cout << "result will be : " << switchCalculator(a, b, c) << endl;
}