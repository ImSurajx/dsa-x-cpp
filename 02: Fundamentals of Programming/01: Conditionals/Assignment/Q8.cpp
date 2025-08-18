// Ques: Given three points (x1,y1), (x2,y2) and (x3,y3), wap a program to check if all the three points fall on the straight line.
#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, y1, y2, y3;
    cout << "enter x1 & y1 : ";
    cin >> x1 >> y1;
    cout << "enter x2 & y2 : ";
    cin >> x2 >> y2;
    cout << "enter x3 & y3 : ";
    cin >> x3 >> y3;
    // Calculate area using the determinant formula
    float area = 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    if (area == 0)
    {
        cout << "The points are collinear (lie on a straight line)." << endl;
    }
    else
    {
        cout << "The points isn't lies on straight line."<< endl;
    }
    return 0;
}
