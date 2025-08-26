// Ques 2: waf take the radius of cicle as anarguments and returns its area.
#include <iostream>
using namespace std;

// function which calulate area of circle
int cricleArea(int raidus)
{
    return 3.1415 * raidus * raidus;
}

int main()
{
    int n;
    cout << "enter radius of circle : ";
    cin >> n;
    cout << "the area of circl is : " << cricleArea(n) << " units square" << endl;
}