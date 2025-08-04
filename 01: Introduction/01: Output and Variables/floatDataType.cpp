// float data type: only holds real numbers so answer also will be a float, if it's not float but it will converted into float
#include<iostream>
using namespace std;
int main(){
    float x = 3.1415;
    float y = 2;
    cout<< x+y<<endl;
    cout<< x-y<<endl;
    cout<< x*y<<endl;
    cout<< x/y<<endl;
    return 0;
    /*
    computer always convert small data types into bigger data types
    cout<<5/2;  -> 2 (int/int) = int
    cout<<5.0/2; -> 2.5 (float/int) = float
    cout<<5/2.0; -> 2.5 (int/float) = float
    cout<<5.0/2.0; -> 2.5 (float/float) = float
    */
}