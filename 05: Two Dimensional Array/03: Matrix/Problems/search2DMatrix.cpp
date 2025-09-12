#include<iostream>
#include<vector>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int rows = matrix.size();
        int columns = matrix[0].size();

        // Start at the top-right corner
        int i = 0;           // row index
        int j = columns - 1; // column index

        // Keep searching until we go out of bounds
        while (i < rows && j >= 0)
        {
            if (matrix[i][j] == target)
            {
                return true; // Found the target
            }
            else if (matrix[i][j] > target)
            {
                j--; // Move left if current element is too big
            }
            else
            {
                i++; // Move down if current element is too small
            }
        }

        // If we exit the loop, target is not in matrix
        return false;
    }
};

// Driver function to test the Solution
int main()
{
    Solution sol;

    vector<vector<int>> matrix = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}};

    int target = 5;

    bool result = sol.searchMatrix(matrix, target);
    if (result)
        cout << "Target " << target << " found in matrix!" << endl;
    else
        cout << "Target " << target << " not found." << endl;

    return 0;
}