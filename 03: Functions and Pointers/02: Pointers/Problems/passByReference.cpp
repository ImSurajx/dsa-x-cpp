#include <iostream>
using namespace std;

// swap function
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    return;
}

int main()
{
    int a, b;
    int *ptr1 = &a, *ptr2 = &b;
    cout << "enter a & b respectively : ";
    cin >> *ptr1 >> *ptr2;
    cout << *ptr1 << " " << *ptr2 << endl;
    swap(ptr1, ptr2);
    cout << *ptr1 << " " << *ptr2 << endl;
    return 0;
}

// // teacher
// void swap(int* x, int* y){
//     int temp = *x;
//     *y = temp;
//     return;
// }
// int main(){
//     int a = 8, b = 6;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
// }