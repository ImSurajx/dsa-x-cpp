// Ques: wap to check weather a character is an alphabet or not.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    if((int(ch)>=65 && int(ch)<= 90) || (int(ch)>=90 && int(ch)<=122)){
        cout<<ch<<" is a alphabet."<<endl;
    } else
    {
        cout<<ch<<" is not a alphabet"<<endl;
    }
}