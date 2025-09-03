#include <iostream>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    v.push_back(4);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    v.pop_back(); // size is updating automaticly but capacity won't
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout<<endl;
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    return 0;
}