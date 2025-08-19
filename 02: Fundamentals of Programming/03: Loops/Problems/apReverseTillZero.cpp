// Ques: Display this AP - 100, 97, 94, .. upto all terms which a positive.
#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    cout << "The AP is : ";
    for (; a > 0 ;)
    {
        cout << a << " ";
        a -= 3;
    }
    cout << endl;
    return 0;
}