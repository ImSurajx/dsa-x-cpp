#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "enter number : ";
    cin >> x;
    // if(x%2 == 0){
    //     cout<<"even";
    // }else{
    //     cout<<"odd";
    // }
    // ternary operator: condition? true : false;
    // note: ternary always solve right to left.
    x % 2 == 0 ? cout << "even" << endl : cout << "odd" << endl;
    return 0;
}