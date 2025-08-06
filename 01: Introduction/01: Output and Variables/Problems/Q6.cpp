// Example: Calculate Simple Interest
#include <iostream>
using namespace std;
int main()
{
    float principle, rate, time, simpleInterest;
    principle = 119849; // amount
    rate = 29;       // percent
    time = 3;        // years
    simpleInterest = (principle * rate * time) / 100;
    cout << simpleInterest;
    return 0;
}