#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for( i = 1; i <= size; i++){ // error : int i = 0, i < size
        cin>>arr[i]; 
        cout<<arr[i];
    }
    return 0;
}