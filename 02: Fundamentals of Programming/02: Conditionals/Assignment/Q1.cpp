// Ques: wap to count the minimum number of notes in a given amount using the switch statement.
#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "enter amount : ";
    cin >> amount;
    int n500, n200, n100, n50, n20, n10, n5, n1;
    n500 = n200 = n100 = n50 = n20 = n10 = n5 = n1 = 0;
    // counting notes of 500;
    switch (amount >= 500)
    {
    case 1:
        n500 = amount / 500;
        amount %= 500;
        break;
    }
    // counting notes of 200;
    switch (amount >= 200)
    {
    case 1:
        n200 = amount / 200;
        amount %= 200;
        break;
    }
    // counting notes of 100;
    switch (amount >= 100)
    {
    case 1:
        n100 = amount / 100;
        amount %= 100;
        break;
    }
    // counting notes of 50;
    switch (amount >= 50)
    {
    case 1:
        n50 = amount / 50;
        amount %= 50;
        break;
    }
    // counting notes of 20;
    switch (amount >= 20)
    {
    case 1:
        n20 = amount / 20;
        amount %= 20;
        break;
    }
    // counting notes of 10;
    switch (amount >= 10)
    {
    case 1:
        n10 = amount / 10;
        amount %= 10;
        break;
    }
    // counting notes of 5;
    switch (amount >= 5)
    {
    case 1:
        n5 = amount / 5;
        amount %= 5;
        break;
    }
    // counting notes of 1;
    switch (amount >= 1)
    {
    case 1:
        n1 = amount / 1;
        amount %= 1;
        break;
    }
    cout << "notes of 500 : " << n500 << endl;
    cout << "notes of 200 : " << n200 << endl;
    cout << "notes of 100 : " << n100 << endl;
    cout << "notes of 50 : " << n50 << endl;
    cout << "notes of 20 : " << n20 << endl;
    cout << "notes of 10 : " << n10 << endl;
    cout << "notes of 5 : " << n5 << endl;
    cout << "notes of 1 : " << n1 << endl;
    return 0;
}