#include <iostream>
using namespace std;
int main()
{
    vector<int> v(5, 7); // vector<data_type> v(size, each_element) -> 
    cout << "size is: " << v.size() << endl;
    cout << "capacity is: " << v.capacity() << endl;
    cout<<v[0]<<" "; // 7
    return 0;
}