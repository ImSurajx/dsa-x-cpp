// Ques: Take 3 Numbers input an tell if they can be the sides of triangle.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three sides of triangles respectively: ";
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c) > b && (b + c > a))
    {
        cout << a << ", " << b << ", " << c << ", " << "they can be the sides of traingle" << endl;
    }
    else
    {
        cout << "they can not be the the sides of triangles" << endl;
    }
    return 0;
}