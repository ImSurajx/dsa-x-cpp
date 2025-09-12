#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int rows = grid.size();
        int columns = grid[0].size();

        // Step 1: Ensure the first column is all 1s by flipping rows if needed
        // Reason: Most significant bit (leftmost) should be 1 for maximum value
        for (int i = 0; i < rows; i++) {
            if (grid[i][0] == 0) { // if first element of row is 0, flip the entire row
                for (int j = 0; j < columns; j++) {
                    grid[i][j] = 1 - grid[i][j]; // flip 0→1 and 1→0
                }
            }
        }

        // Step 2: For each column, check if flipping increases the number of 1s
        // Reason: More 1s in higher place values → larger binary number
        for (int j = 0; j < columns; j++) {
            int noz = 0, noo = 0;
            for (int i = 0; i < rows; i++) {
                if (grid[i][j] == 0) noz++;
                else noo++;
            }
            // If zeros are more than ones in this column, flip the column
            if (noz > noo) {
                for (int i = 0; i < rows; i++) {
                    grid[i][j] = 1 - grid[i][j]; // flip each element
                }
            }
        }

        // Step 3: Convert each row (binary) into decimal and sum them up
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            int rowValue = 0;
            for (int j = 0; j < columns; j++) {
                rowValue = rowValue * 2 + grid[i][j]; // build binary → decimal
            }
            sum += rowValue;
        }

        return sum;
    }
};

// Driver function to test the Solution
int main() {
    Solution sol;

    // Example test case
    vector<vector<int>> grid = {
        {0,0,1,1},
        {1,0,1,0},
        {1,1,0,0}
    };

    int result = sol.matrixScore(grid);
    cout << "Maximum score after flipping: " << result << endl;
    // Expected output: 39

    return 0;
}