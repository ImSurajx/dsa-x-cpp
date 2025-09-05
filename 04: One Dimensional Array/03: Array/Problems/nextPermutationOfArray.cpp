#include <iostream>
#include <vector>
using namespace std;

// This function takes elements from the user and fills the vector.
// It uses a pass-by-reference to modify the original vector.
void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

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

// This function reverses a portion of the vector from a starting index to an ending index (inclusive).
// It uses a two-pointer approach for efficiency.
void reverse(vector<int> &nums, int i, int j)
{
    while (i <= j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}

// The main function to find the next lexicographically greater permutation.
void nextPermutation(vector<int> &nums)
{
    // Step 1: Find the pivot element.
    // The pivot is the rightmost element that is smaller than its neighbor to the right.
    // This loop scans the array from right to left.
    int idx = -1;
    int n = nums.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            idx = i;
            break; // Stop at the first (rightmost) element that satisfies the condition.
        }
    }

    // Step 2: Handle the edge case where the array is the last permutation.
    // If no pivot is found (idx remains -1), the array is sorted in descending order.
    // In this case, the next permutation is the array sorted in ascending order.
    if (idx == -1)
    {
        reverse(nums, 0, nums.size() - 1);
        return;
    }

    // Step 3: Find the element to swap with the pivot.
    // We need to find the smallest element in the suffix that is still greater than the pivot.
    // The most efficient way is to scan the suffix from right to left and find the first element
    // that is greater than the pivot.
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] > nums[idx])
        {
            // Step 4: Swap the pivot with this element.
            int temp = nums[idx];
            nums[idx] = nums[i];
            nums[i] = temp;
            break; // Stop after swapping.
        }
    }

    // Step 5: Reverse the suffix.
    // The elements after the pivot are now in descending order.
    // Reversing them sorts them into ascending order, giving the next lexicographical permutation.
    reverse(nums, idx + 1, n - 1);
}

int main()
{
    int n;
    cout << "enter size of vector : ";
    cin >> n;
    vector<int> v;
    cout << "enter elements : ";
    input(v, n);
    nextPermutation(v);
    cout << "array is : ";
    display(v);
    return 0;
}
