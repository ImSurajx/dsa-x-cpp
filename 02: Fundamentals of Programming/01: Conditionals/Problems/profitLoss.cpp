/*
Ques: if cost price and selling price of an item is input through the keyboard
write a program to determine whether the seller has made profit or incurred loss. also
determine how much profit he madde or loss he incurred.
// else if
*/
#include <iostream>
using namespace std;
int main()
{
    int costPrice, sellPrice;
    cout << "enter cost price: ";
    cin >> costPrice;
    cout << "enter sell price: ";
    cin >> sellPrice;
    if (costPrice < sellPrice)
    {
        cout << "seller made profit of Rs." << sellPrice - costPrice << endl;
    }
    else if (sellPrice < costPrice)
    {
        cout << "seller made a loss of Rs." << costPrice - sellPrice << endl;
    }
    else
    {
        cout << "seller made no profit no loss." << endl;
    }
    return 0;
}