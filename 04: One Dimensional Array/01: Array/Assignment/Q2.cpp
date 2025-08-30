// Ques: find the second largest element in the given array in one pass.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max, smax;
    cout << "enter no of elements : ";
    cin >> n;
    int arr[n];
    cout << "enter element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = smax = INT_MIN;
    int temp = 0;
    // calculating smaximum in onepass
    for (int i = 0; i < n; i++)
    {   
        if(max<arr[i]){
            smax = max;
            max = arr[i];
        }
        
    }
    cout << "the maximum value is : " << max << endl;
    cout << "the  second maximum value is : " << smax << endl;
    return 0;
}