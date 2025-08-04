// variable declaration & updation
#include<iostream>
using namespace std;
int main(){
    // declare a variable
    int x; // create a box inside memory which name is x
    x = 7; // put 7 inside the box which have name x
    cout << x <<endl; // went to x name box & get the value & print it
    // updation
    x = 10; // now again went to x name box, remove old value & add 10
    cout << x << endl; 
    x = 19; // now again went to x name box, remove old value & add 19
    cout << x <<endl;
    x = x + 10; // now again went to x name box & add 10 into existing value (x = 29) & also written as x += 10
    cout<< x <<endl; 
    int y = 19; // direct declaration
    x = x * 6; // also writen as x *= 6 
    cout<< x <<endl; 
    return 0;
}