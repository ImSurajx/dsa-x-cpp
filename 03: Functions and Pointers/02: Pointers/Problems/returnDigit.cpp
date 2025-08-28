// waf to find out the first & last digit of a number without returning anything.
#include <iostream>
using namespace std;

void digit(int ptr, int* firstDigit, int* lastDigit)
{
    int store;
    *lastDigit = ptr % 10;
    if (ptr == 0)
    {
        *firstDigit = 0;
    }
    else
    {
        while (ptr > 9)
        {
            ptr /= 10;
        }
        *firstDigit = ptr;
    }
}

int main()
{
    int n, firstDigit, lastDigit;
    cout << "enter a number : ";
    cin >> n;
    digit(n, &firstDigit, &lastDigit);
    cout << "first digit of number is : " << firstDigit << endl;
    cout << "last digit of number is : " << lastDigit << endl;
}

// teacher code.
// void find(int n, int* ptr1, int* ptr2){
//     *ptr2 = n%10; //lastDigit
//     while(n>9){
//         n/=10;
//     }
//     *ptr1 = n;
//     return;
// }

// int main(){
//     int n;
//     cin>>n;
//     int firstDigit, lastDigit;
//     int* ptr1 = &firstDigit;
//     int* ptr2 = &lastDigit;
//     find(n, ptr1, ptr2);
//     cout<<firstDigit<<" "<<lastDigit<<endl;
// }