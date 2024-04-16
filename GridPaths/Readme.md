# Grid Path Counting

This repository contains a C++ implementation for counting the number of paths from the top-left corner to the bottom-right corner of a grid while moving only right and down and traversing only through open cells.

## Algorithm Overview

1. Create a 2D vector `dp` of size n×n initialized with zeros. This vector will store the number of paths to reach each cell.
2. Set `dp[0][0]` to 1 if the starting cell is open ('.') and 0 otherwise.
3. For each cell in the first row or the first column, if the cell is open ('.'), set the corresponding cell in `dp` to the value of the cell above (for cells in the first column) or the value of the cell to the left (for cells in the first row).
4. Iterate through each cell starting from (1, 1) to (n-1, n-1). For each open cell, update `dp[i][j]` by adding the number of paths from the cell above (`dp[i−1][j]`) and the number of paths from the cell to the left (`dp[i][j−1]`).
5. Return the value stored in `dp[n−1][n−1]`, which represents the number of paths from the top-left corner to the bottom-right corner of the grid while moving only right and down and traversing only through open cells ('.').


## Example

Suppose we have the following grid:

```
4 4
. . . .
. # . .
. . . .
. . . .
```

This indicates a 4x4 grid with some cells blocked with '#' and others open ('.').

Running the script would output:

```
Number of paths from top-left to bottom-right: 10
```
