// Calculate Simple Interest
#include <iostream>
using namespace std;
int main()
{
    int principle, rate, time;
    cout << "enter principle amount : ";
    cin >> principle;
    cout << "enter rate of interest : ";
    cin >> rate;
    cout << "enter time period : ";
    cin >> time;
    cout << "simple interest will be : " << (principle * rate * time) / 100 << endl;
    return 0;
}