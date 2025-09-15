// Ques: return the total number of digits in a number without using any loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    string str = to_string(n);
    cout<<"length is : "<<str.length()<<endl;
    return 0;
}