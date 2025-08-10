// WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char ch1, ch2;
    cout<<"enter char1 & char2 respectively: ";
    cin>>ch1>>ch2;
    cout<<"the differnce b/w char values : "<<int(ch1)-int(ch2)<<endl;
    return 0;
}