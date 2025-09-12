#include <iostream>
#include <vector>
using namespace std;
void change2DVector(vector<vector<int>> &v)
{
    v[0][0] = 100;
}
void length(vector<vector<int>> &v)
{
    cout<<"size : "<<endl;
    cout<<v.size()<<endl;
    cout<<v[0].size()<<endl;
    cout<<v[1].size()<<endl;
    cout<<v[2].size()<<endl;

    cout<<"capacity : "<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[0].capacity()<<endl;
    cout<<v[1].capacity()<<endl;
    cout<<v[2].capacity()<<endl;
}
int main()
{
    // pushing element in v1
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    // pushing element in v2
    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);

    // pushing element in v3
    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);

    // column size can varry in vectors
    // like: v = {{1,2,3},{4,5},{6,7,8,9,10}};
    vector<vector<int>> v; // vector of vectors : we can not push elements we can only push vectors
    // pushing vector inside vector
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout << v[0][0] << " "; // v[1][2] -> invalid or 0.
    change2DVector(v);
    cout<<v[0][0]<<endl;
    length(v);

}