#include <iostream>
using namespace std;
int main()
{
    char ptr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    for (int i = 0; ptr[i] != '\0'; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
    cout << ptr << endl;
    char str[5] = "abcd";
    for (int i = 0; i < 5; i++)
    {
        cout << str[i] << " ";
    }
    cout << "my name is suraj.";
    cout << (int)(str[5]);
    cout << (int)(str[5]);
    cout << endl;
    return 0;
}