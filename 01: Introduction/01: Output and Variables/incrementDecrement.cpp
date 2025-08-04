// Increment - Decrement Operators and Comments
#include<iostream>
using namespace std;
int main(){
    int x = 5;
    cout<<x<<endl; // 5
    // post increment: first use the value of x then increase it by 1
    cout<<x++<<endl; // 5
    cout<<x<<endl; // 6
    // pre increment: first increase the value of x by 1 then use it;
    cout<<++x<<endl; // 7
    cout<<x<<endl; // 7
    // post decrement: first use the value of x then decrease it by 1
    cout<<x--<<endl; // 7
    cout<<x<<endl; // 6
    // pre decrement: first decrease the value of x by 1 then use it;
    cout<<--x<<endl; // 5
    cout<<x<<endl; // 5
    return 0;
}