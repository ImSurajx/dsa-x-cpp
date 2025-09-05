#include <iostream>
#include <vector>
using namespace std;

// This function displays the contents of the vector.
// It uses a pass-by-reference for efficiency.
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// The main function to calculate the trapped rain water.
// This is a dynamic programming solution using three passes.
int trap(vector<int> &height)
{
    int n = height.size();

    // Edge case: if the array has less than 3 bars, no water can be trapped.
    if (n < 3)
    {
        return 0;
    }

    // Step 1: Calculate the greatest element to the left of each bar.
    // We create an array 'prev' to store these maximums.
    vector<int> prev(n);
    prev[0] = 0; // The first bar has no bar to its left, so we can use 0.
    int max_so_far = height[0];
    for (int i = 1; i < n; i++)
    {
        prev[i] = max_so_far; // Store the maximum seen so far.
        if (max_so_far < height[i])
        {
            max_so_far = height[i]; // Update the maximum for the next iteration.
        }
    }

    // Step 2: Calculate the greatest element to the right of each bar.
    // We create an array 'next' to store these maximums.
    vector<int> next(n);
    next[n - 1] = 0; // The last bar has no bar to its right.
    max_so_far = height[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        next[i] = max_so_far; // Store the maximum seen so far.
        if (max_so_far < height[i])
        {
            max_so_far = height[i]; // Update the maximum for the next iteration.
        }
    }

    // Step 3: Calculate the total trapped water.
    // The water trapped above a bar is min(left_max, right_max) - current_height.
    int total_water = 0;
    for (int i = 1; i < n - 1; i++) // We don't check the first and last bars as they can't trap water.
    {
        int min_wall = min(prev[i], next[i]);
        if (height[i] < min_wall)
        {
            total_water += (min_wall - height[i]);
        }
    }

    return total_water;
}

int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    cout << "array is : ";
    display(v);
    cout << "traped water is : " << trap(v) << endl;
    return 0;
}
