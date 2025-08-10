#include<iostream>
using namespace std;
int main(){
    int x = 1;
    cout<<"current value of x is : "<<x<<endl;
    x += 15; // add 15 in existing value of x
    cout<<"current value of x is : "<<x<<endl;
    x -= 5; // subtract 5 from existing value of x
    cout<<"current value of x is : "<<x<<endl;
    x *= 50; // multiply 50 in existing value of x
    cout<<"current value of x is : "<<x<<endl;
    x /= 6; // divide existing value of x by 6
    cout<<"current value of x is : "<<x<<endl;
    return 0;
}