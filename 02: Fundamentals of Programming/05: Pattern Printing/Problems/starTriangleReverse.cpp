/*

* * * * * 
* * * * 
* * * 
* * 
* 

*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter num : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num + 1 - i; j++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
    return 0;
}