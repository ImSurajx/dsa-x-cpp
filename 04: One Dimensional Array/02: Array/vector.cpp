#include <iostream>
#include <vector>
using namespace std;
/*
why vector?
we face very major issue with array that is fixed size, once a array is declared the
size of array is fixed we can't change the size. so to solve this problem vector was developed
what vector do basicly it's kind of an array but with dynamic size, like whenever space is full
it's create a new array, with the double size of previous array, & compy previous element of array
into new created array.
*/
int main()
{
    // syntax vector<data_type> name;
    vector<int> v; // you do not need to mention the size.
    // inserting / input : don't use [], use push back, when size is not declared.
    v.push_back(6); // pusing element into vector v
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    v.push_back(1);
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    // v[1] = 1;   don't do this it won't check vector is full or not.
    v.push_back(9);
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    v.push_back(0);
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    v.push_back(4);
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    // if you want to update/access use square brackets.
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // i[ptr], i[arr]
    }
    return 0;
}