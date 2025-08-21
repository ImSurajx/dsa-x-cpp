/*
enter a number : 5
          A 
        A B 
      A B C 
    A B C D 
  A B C D E 
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
        for (int a = 1; a <= num - i + 1; a++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << char(j + 64) << " ";
        }
        cout << endl;
    }
    return 0;
}