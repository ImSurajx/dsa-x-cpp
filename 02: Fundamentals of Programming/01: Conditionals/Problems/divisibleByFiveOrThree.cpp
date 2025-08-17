#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num % 5 == 0 || num % 3 == 0)
    {
        cout << "the number is divisible by 5 or 3." << endl;
    }
    else 
    {
        cout << "the number is not divisible by 5 or 3." << endl;
    }
    return 0;
}
/*
- &&
    if(condtion1 && condition2){
        // if the condtion1 is false then compiler won't check for condition2
    }

- || 
    if(condtion1 || condition2){
        // if the condtion1 is true then compiler won't check for condition2
    }
*/