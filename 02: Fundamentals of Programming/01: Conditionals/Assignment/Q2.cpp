// Ques: Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.
#include <iostream>
using namespace std;
int main()
{
    float radius;
    cout << "enter raidus of circle : ";
    cin >> radius;
    float area = 3.1415 * (radius) * (radius);
    float circumference = 2 * 3.1415 * radius;
    if (area > circumference)
    {
        cout << area << "(area) is greater than (circumference)" << circumference << endl;
    }
    else
    {
        cout << circumference << "(circumference) is greater than (area)" << area << endl;
    }
}