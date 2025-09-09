// Ques: you are given a matrix/2D-array of size (nxn). change this matrix into it's transpose.
#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    cout << "matrix is : " << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 10;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}