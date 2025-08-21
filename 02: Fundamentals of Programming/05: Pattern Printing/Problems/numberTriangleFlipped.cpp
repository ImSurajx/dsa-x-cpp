/*
        1 
      1 2 
    1 2 3 
  1 2 3 4 
1 2 3 4 5 
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        // spaces
        for (int j = 1; j <= num - i; j++)
        {
            cout << "  ";
        }
        // star
        for (int k = 1; k <= i; k++)
        {
            cout << k <<" ";
        }
        cout << endl;
    }
    return 0;
}