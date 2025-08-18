// Ques: Given a point (x,y), wap to find out if it lies on the x-axis, y-axis or at origin, viz (0,0)
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter x : ";
    cin >> x;
    cout << "enter y : ";
    cin >> y;
    // if (x > 0 && y > 0)
    // {
    //     cout <<"x & y isn't lies on any axis." << endl;
    // }
    // else if (x > 0 && y == 0)
    // {
    //     cout << "lies on x-axis." << endl;
    // }
    // else if (x == 0 && y > 0)
    // {
    //     cout << "lies on y-axis." << endl;
    // }
    // else if (x < 0 && y < 0)
    // {
    //     cout <<"x & y isn't lies on any axis." << endl;
    // }
    // else if (x < 0 && y == 0)
    // {
    //     cout << "lies on x-axis." << endl;
    // }
    // else if (x == 0 && y < 0)
    // {
    //     cout << "lies on y-axis." << endl;
    // }
    // else
    // {
    //     cout <<"x & y is lies on origin." << endl;
    // }
    if (x == 0 && y == 0)
    {
        cout << "x & y is lies on origin." << endl;
    }
    else if (x != 0 && y == 0)
    {
        cout << "lies on x-axis." << endl;
    }
    else if (x == 0 && y != 0)
    {
        cout << "lies on y-axis." << endl;
    }
    else
    {
        cout << "x & y isn't lies on any axis." << endl;
    }
    return 0;
}