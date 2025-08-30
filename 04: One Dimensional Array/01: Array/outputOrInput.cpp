#include<iostream>
using namespace std;
int main(){
    int arr[7];
    // taking input using indices : 
    cout<<"enter array elements : ";
    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
    }
    // giving output using indices : 
    cout<<"array is : ";
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}