#include <iostream>
#include <vector>
#include <utility> // For std::swap
using namespace std;

// This function takes elements and populates the vector.
void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

// This function displays the elements of the vector.
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// This function moves all zeros to the end of the array in a single pass.
// The algorithm uses a "boundary" pointer 'j' to track where the next non-zero
// element should be placed.
void moveZeros(vector<int> &v, int n)
{
    int j = 0; // The boundary pointer for non-zero elements
    for (int i = 0; i < n; i++)
    {
       // If the element at 'i' is not a zero, it should be placed
       // at the position of 'j' and the boundary should move forward.
       if(v[i] != 0)
       {
            // Swap the non-zero element with the element at the boundary.
            swap(v[i], v[j]);
            j++;
       }
    }
}

int main()
{
    int n;
    cout << "enter size of array : ";
    cin >> n;
    vector<int> v;
    cout << "enter elements : ";
    input(v, n);
    // my solution
    // int i = 0;
    // int j = n - 1;
    // while (i <= j)
    // {
    //     if (v[j] == 0)
    //     {
    //         j--;
    //     }
    //     else if (v[i] != 0)
    //     {
    //         i++;
    //     }
    //     else if (v[i] == 0 & v[j] != 0)
    //     {
    //         int temp = v[j];
    //         v[j] = v[i];
    //         v[i] = temp;
    //         i++;
    //         j--;
    //     }
    // }
    
    moveZeros(v, n);
    
    cout << "array after moving zeros: ";
    display(v);
    return 0;
}

    