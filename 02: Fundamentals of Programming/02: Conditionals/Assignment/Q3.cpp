// Predict the output
#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    float y = 3.0;
    if (x == y)                               // reason: lang convert normal data type into bigger data type like int into float.
        cout << "x and y are equal." << endl; // output
    else
        cout << "x and y are not equal." << endl;
    return 0;
}