// Ques: two numbers are enterd through the keyboard, wap to find the value of one number raised to the power other.
#include <iostream>
using namespace std;
int main()
{
    // taking input;
    float base, exponent;
    cout << "enter base : ";
    cin >> base;
    cout << "enter exponent : ";
    cin >> exponent;
    // Handle Special Case (Exponent is Zero):
    if (exponent == 0)
    {
        cout << base << " raised to " << exponent << " is 1" << endl;
    }
    else
    {
        // Prepare for Calculation:
        float result = 1.0;
        bool isNagative = false;
        float absExponent;
        // Check for Negative Exponent
        if (exponent < 0)
        {
            isNagative = true;
            absExponent = -1 * exponent;
        } else{
            absExponent = exponent;
        }
        //  Perform Calculation (The Main Loop):
        while (absExponent > 0)
        {
            result *= base;
            absExponent--;
        }
        if (isNagative)
        {
            cout << base << " raised to " << exponent << " is : " << (1.0 / result) << endl;
        }
        else
        {
            cout << base << " raised to " << exponent << " is : " << result << endl;
        }
    }
    return 0;
}