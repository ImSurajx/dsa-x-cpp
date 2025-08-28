// Ques: wap to find out the product of two numbers using pointers.
#include <iostream>
using namespace std;
void pro(int a, int b, int *product)
{
    *product = a * b;
}

int main()
{
    int a, b, product;
    cout << "enter a & b respectively : ";
    cin >> a >> b;
    pro(a, b, &product);
    cout << "product is : " << product << endl;
    return 0;
}