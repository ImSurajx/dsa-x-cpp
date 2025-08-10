#include<iostream>
using namespace std;
int main(){
    // bool p = false;
    // bool q = false;
    // bool r = true;
    // cout<<(p == q == r)<<endl; // 1 
    // calulation happened: left --> right if the same type of operators present.
    int p = 1;
    int q = 2;
    int r = 2;
    cout<<(p==q==r)<<endl; // 0
    return 0;
}