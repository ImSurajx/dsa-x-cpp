// Ques: wap to store roll number and marks obtained by 4 student side by side in a matrix
#include<iostream>
using namespace std;
int main(){
    int arr[2][4];
    cout<<"enter roll number : ";
    for (int i = 0; i < 1; i++) // -> taking input.
    {
        // where i -> rows.
        for (int j = 0; j < 4; j++)
        {
            // where j -> columns.
            cin >> arr[i][j];
        }
    }
    cout<<"enter marks : ";
     for (int i = 1; i < 2; i++) // -> taking input.
    {
        // where i -> rows.
        for (int j = 0; j < 4; j++)
        {
            // where j -> columns.
            cin >> arr[i][j];
        }
    }
    cout<<"roll numbers are : ";
    for (int i = 0; i < 1 ; i++) // --> prinitng matrix/2d array.
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"marks are : ";
    for (int i = 1; i < 2 ; i++) // --> prinitng matrix/2d array.
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}