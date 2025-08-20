// Ques: wap to check if a number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << num << " is not prime or nor composite." << endl;
    } else if(count == 2){
         cout << num << " is prime number." << endl;
    }
    else
    {
        cout << num << " is a composite number." << endl;
    }
    return 0;
}