/*
How much space does the following data types take?
int
bool
float
*/
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    bool flag = true;
    float b = 8.23;
    cout<<"int: "<<sizeof(a)<<endl;
    cout<<"flag: "<<sizeof(flag)<<endl;
    cout<<"float: "<<sizeof(b);
}