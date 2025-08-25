// Ques: WAP to swap two numbers.
#include <iostream>
using namespace std;


int main()
{
    int a, b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    // swaping two values
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"a is : "<<a<<endl<<"b is : "<<b<<endl;
    
    
    return 0;
}