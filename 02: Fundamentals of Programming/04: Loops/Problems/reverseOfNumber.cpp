// Ques: WAP to print reverse of a given number.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int store = num; // 89, 9*10 = 90+8 = 98
    int reverseDigit = 0;
    while (num > 0)
    {
        /*
        Algorithm:
        - Initialize a variable reversedNum to 0.
        - While the original number is greater than 0, extract the last digit using the modulus operator (%).
        - Update reversedNum by multiplying it by 10 and adding the extracted digit, then remove the last digit from the original number by dividing it by 10.
        - Once the loop finishes, reversedNum will hold the reversed value.
        */
        reverseDigit *= 10;
        reverseDigit += num % 10;
        num /= 10;
    }
    cout << "Reverse of given number is : " << reverseDigit << endl;
    return 0;
}