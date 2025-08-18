// Ques: wap to input sides of triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include <iostream>
using namespace std;
int main()
{
    float side1, side2, side3;
    cout << "enter first side of triangle : ";
    cin >> side1;
    cout << "enter second side of triangle : ";
    cin >> side2;
    cout << "enter third side of triangle : ";
    cin >> side3;
    // if (side1 == side2 && side2 == side3)
    // {
    //     if (side3 == side1)
    //     {
    //         cout << "equilateral triangle." << endl;
    //     }
    //     else
    //     {
    //         cout << "isosceles triangle." << endl;
    //     }
    // }
    // else
    // {
    //     if (side2 == side3)
    //     {
    //         cout << "isosceles triangle." << endl;
    //     }
    //     else
    //     {
    //         cout << "scalene triangle." << endl;
    //     }
    // }
    if (side1 == side2 && side2 == side3)
    {
        cout << "equilateral triangle." << endl;
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        cout << "isosceles triangle." << endl;
    }
    else
    {
        cout << "scalene triangle." << endl;
    }
    return 0;
}