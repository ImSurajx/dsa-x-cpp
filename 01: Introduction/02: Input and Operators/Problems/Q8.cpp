// Predict the output
#include<iostream>
using namespace std;
int main(){
    int num1;
    int p = 5, q = 10;
    p += q -= p; // for + & - it's right to left, 10 or 5
    cout<<p<<" "<<q<<endl;
    return 0;
}