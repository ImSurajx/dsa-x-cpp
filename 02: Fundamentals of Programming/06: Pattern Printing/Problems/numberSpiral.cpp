#include <iostream>
using namespace std;

// This program generates a hollow square number pattern of size (2n-1) x (2n-1).
// The outer layer of the square is filled with the number 'n', and the numbers
// decrease by one towards the center, where the number '1' is printed.

int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;

    // The nested loops iterate through every row (i) and column (j) of the grid.
    // The total size of the grid is (2n-1) x (2n-1).
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            // The core logic uses a clever trick to simplify the calculation for
            // every cell in the grid. We use "pseudo-indices" (a and b) that represent
            // the cell's distance from the top/left edges, or a mirrored distance
            // from the bottom/right edges.

            int a = i; // 'a' represents the distance from the top edge
            int b = j; // 'b' represents the distance from the left edge

            // If the row is in the bottom half of the pattern, we mirror its index.
            // For example, if n=4, row 5 becomes 3, row 6 becomes 2, etc.
            if (a > n)
                a = 2 * n - i;

            // If the column is in the right half of the pattern, we mirror its index.
            // For example, if n=4, column 5 becomes 3, column 6 becomes 2, etc.
            if (b > n)
                b = 2 * n - j;

            // The number to be printed is determined by the minimum distance to any edge.
            // By finding the minimum of our pseudo-indices (a and b), we get the
            // minimum distance to the top or left "pseudo-edge" for any cell.
            int x = min(a, b);

            // This final formula converts the distance 'x' into the correct number.
            // For the outermost layer, x is 1, so the number is (n - 1 + 1) = n.
            // For the next layer, x is 2, so the number is (n - 2 + 1) = n-1.
            cout << n - x + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}