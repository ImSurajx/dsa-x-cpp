// Ques: given the length and breadth of a rectangle, wap to find weather numerically the area of the rectangle is greater than its perimeter.
#include <iostream>
using namespace std;
int main()
{
    float length, breadth;
    cout << "enter length : ";
    cin >> length;
    cout << "enter breadth : ";
    cin >> breadth;
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    if (area > perimeter)
    {
        cout << area << "(area) is greater than (perimeter)" << perimeter << endl;
    }
    else
    {
        cout << perimeter << "(perimeter) is greater than (area)" << area << endl;
    }
    return 0;
}