// Example: Take two integers a & b : a > b, and find the remainder when a is divided by b.
#include<iostream>
using namespace std;
int main(){
    // Dividend = (Divisor * Quotient) + Remainder
    // So Remainder = Dividend - (Divisor * Quotient)
    int  Dividend = 29;
    int Divisor = 3;
    int Quotient = 29/3;
    int Remainder = Dividend - (Divisor * Quotient);
    cout<<"The Remainder is: "<< Remainder;
    return 0;
}