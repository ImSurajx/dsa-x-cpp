#include <iostream>
using namespace std;
int main()
{
    int num[26], temp; // a array called num with size 26 & a variable called temp is created
    num[0] = 100;      // value 100 assigned to first element of num array.
    num[25] = 200;     // value 200 assigned to 25th element of num array.
    temp = num[25];    // variable temp store the value of num[25]. which is 200
    num[25] = num[0];  // variable num[25] store the value of num[0]; which is 100;
    num[0] = temp;     // num[0] = 200;
    cout << num[0] << " " << num[25] << endl;
    return 0;
}