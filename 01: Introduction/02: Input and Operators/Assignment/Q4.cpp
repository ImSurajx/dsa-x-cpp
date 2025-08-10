// WAP for finding the volume of the cylinder by taking radius and height as input.
#include <iostream>
using namespace std;
int main()
{
    float radius, height;
    cout << "enter radius & height of cylinder respectively : ";
    cin >> radius >> height;
    cout << "the volume of cylinder is : " << 3.1415 * ((radius * radius) * height) << endl;
    return 0;
}